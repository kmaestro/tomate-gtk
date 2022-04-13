<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\Label;
use Sabre\Event\EmitterInterface;
use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\Pomodoro\SessionPayload;

class Countdown extends Label
{
    public function __construct(private EventEmitter $emitter)
    {
        parent::__construct('00:00');
        $this->widget->setMarginTop(30);
        $this->widget->setMarginBottom(10);
        $this->widget->setMarginEnd(10);
        $this->widget->setMarginStart(10);
        $this->update(new SessionPayload(0));

        $emitter->on(Event::timerUpdate->name, $this->update(...));
    }

    public function update(SessionPayload $payload)
    {
        $this->setMarkup($this->timerMarkup($payload->countdown()));
    }

    private function timerMarkup(string $timeLeft): string
    {
        return sprintf('<span face="sans-serif" font="45">%s</span>', $timeLeft);
    }
}

