<?php

namespace Tomate\Pomodoro;

use Tomate\Pomodoro\Event\Bus;
use Tomate\Pomodoro\Event\Enum\Event;

class Timer
{
    private int $time;
    private State $state;
    private int $duration;
    private int $timeLeft;

    public function __construct(private Bus $bus)
    {
        $this->duration = $this->timeLeft = 0;
        $this->time = time();
        $this->state = State::stopped;
    }

    public function start(int $seconds)
    {
        if ($this->state === State::started) {
            return;
        }
        $this->state = State::started;
        $this->duration = $this->timeLeft = $seconds;
        timeoutAddSeconds(1, $this->update(...));
    }

    public function stop()
    {
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
        $this->duration = $this->timeLeft = 0;
    }

    private function update(): bool
    {
        if ($this->state !== State::started) {
            return false;
        }

        if ($this->timeLeft <= 0) {
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
