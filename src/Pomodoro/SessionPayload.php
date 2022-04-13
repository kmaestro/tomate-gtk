<?php

namespace Tomate\Pomodoro;

class SessionPayload
{
    public function __construct(private int $duration)
    {
    }

    public function countdown()
    {
        return date('i:s', $this->duration);
    }
}
