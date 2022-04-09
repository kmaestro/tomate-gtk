<?php

namespace Tomate\Pomodoro;

use Tomate\Pomodoro\Event\Bus;

class Session
{
    public function __construct(
        private Bus $bus,
        private Timer $timer
    ) {

    }

    public function start()
    {
        $this->timer->start(123);
    }

    public function stop()
    {

    }
}
