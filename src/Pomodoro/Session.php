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
        $this->emitter->on(Event::timerEnd->name, $this->end(...));
    }

    public function start()
    {
        $this->timer->start();
//        $this->emitter->emit('isBlock', [true]);
    }

    public function stop()
    {
        $this->timer->stop();
    }

    private function end()
    {
        $this->pomodoros++;

        $this->bus->send(Event::sessionEnd, new SessionPayload(Config::DEFAULTS['DURATION_POMODORO']));
    }
}
