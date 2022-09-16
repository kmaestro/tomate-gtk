<?php

namespace Tomate\Pomodoro;

use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Event\Bus;
use Tomate\Pomodoro\Event\Enum\Event;

class Session
{
    private $pomodoros = 0;
    public function __construct(
        private Bus $bus,
        private Timer $timer,
        private EventEmitter $emitter
    ) {
        $this->emitter->on(Event::timerEnd->value, $this->end(...));
    }

    public function start()
    {
        $this->timer->start(Config::DEFAULTS['DURATION_POMODORO']*60);
    }

    public function stop()
    {
        $this->timer->stop();
    }

    private function end()
    {
        $this->pomodoros++;

        $this->bus->send(Event::sessionEnd, new SessionPayload(0));
    }
}
