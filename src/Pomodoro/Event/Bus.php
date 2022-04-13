<?php

namespace Tomate\Pomodoro\Event;

use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\Pomodoro\SessionPayload;

class Bus
{
    public function __construct(private EventEmitter $eventEmitter)
    {
    }

    public function connect(Event $event, callable $fun)
    {
        $this->eventEmitter->on($event->name, $fun);
    }

    public function send(Event $event, SessionPayload $payload)
    {
        $this->eventEmitter->emit($event->name, [$payload]);
    }
}
