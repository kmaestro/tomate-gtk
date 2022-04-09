<?php

namespace Tomate\Pomodoro;

use Tomate\Pomodoro\Event\Bus;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\UI\Widgets\Header;

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
        $this->state = State::started;
        $this->duration = $this->timeLeft = $seconds;
        timeoutAddSeconds(1, $this->update(...));
    }

    public function isRunning(): bool
    {
        return $this->state === State::started;
    }

    private function update(): bool
    {
        if ($this->state !== State::started) {
            return false;
        }

        $this->trigger(Event::timerUpdate);
        return true;
    }

    private function trigger(Event $event)
    {
        $this->bus->send($event);
    }
}
