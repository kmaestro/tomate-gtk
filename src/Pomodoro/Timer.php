<?php

namespace Tomate\Pomodoro;

use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Event\Bus;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\UI\Widgets\SessionButton;

class Timer
{
    private int $time;
    private State $state;
    private int $duration;
    private int $timeLeft;

    public function __construct(
        private Bus  $bus,
        private SessionButton $button,
        EventEmitter $emitter
    )
    {
        $this->duration = $this->timeLeft = Config::DEFAULTS['DURATION_POMODORO']*60;
        $emitter->on('time', function (int $time) {
            $this->timeLeft = $time;
        });
        $this->time = time();
        $this->state = State::stopped;
    }

    public function start()
    {
        $this->button->setIsBlock(true);
        if ($this->state === State::started) {
            return;
        }
        $this->state = State::started;
        timeoutAddSeconds(1, $this->update(...));
    }

    public function stop()
    {
        $this->button->setIsBlock(false);
        $this->state = State::stopped;
        $this->reset();
        $this->trigger(Event::timerUpdate);
    }

    public function isRunning(): bool
    {
        return $this->state === State::started;
    }

    public function reset()
    {
        $this->duration = $this->timeLeft = Config::DEFAULTS['DURATION_POMODORO'];
    }

    public function end(): void
    {
        $this->button->setIsBlock(false);
        $this->state = State::ended;
        if ($this->button->getActiveButtonAlias() === 'DURATION_SHORT_BREAK') {
            $this->timeLeft = Config::DEFAULTS['DURATION_LONG_BREAK']*60;
            $this->button->onActive('DURATION_LONG_BREAK');
        } elseif ($this->button->getActiveButtonAlias() === 'DURATION_LONG_BREAK') {
            $this->timeLeft = Config::DEFAULTS['DURATION_POMODORO']*60;
            $this->button->onActive('DURATION_POMODORO');
        } else {
            $this->timeLeft = Config::DEFAULTS['DURATION_SHORT_BREAK']*60;
            $this->button->onActive('DURATION_SHORT_BREAK');
        }
        $this->bus->send(Event::timerEnd, new SessionPayload($this->timeLeft));
        $this->bus->send(Event::timerUpdate, new SessionPayload($this->timeLeft));
    }

    private function update(): bool
    {
        if ($this->state !== State::started) {
            return false;
        }

        if ($this->timeLeft <= 0) {
            $this->end();
            return false;
        }

        $this->timeLeft--;
        $this->trigger(Event::timerUpdate);
        return true;
    }

    private function trigger(Event $event)
    {
        $this->bus->send($event, new SessionPayload($this->timeLeft));
    }
}
