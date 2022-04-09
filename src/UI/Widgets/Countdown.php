<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\Label;

class Countdown extends Label
{
    public function __construct()
    {
        parent::__construct('00:00');
        $this->widget->setMarginTop(30);
        $this->widget->setMarginBottom(10);
        $this->widget->setMarginEnd(10);
        $this->widget->setMarginStart(10);
        $this->update('00:00');
    }

    public function update(string $time)
    {
        $this->setMarkup($this->timerMarkup($time));
    }

    private function timerMarkup(string $timeLeft): string
    {
        return sprintf('<span face="sans-serif" font="45">%s</span>', $timeLeft);
    }
}

