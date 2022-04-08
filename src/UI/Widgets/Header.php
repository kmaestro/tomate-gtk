<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\ButtonIcon;
use PGtk\Gtk\Gtk\HeaderBar;
use Tomate\Pomodoro\Timer;

class Header extends HeaderBar
{
    private ButtonIcon $buttonStart;
    private ButtonIcon $buttonStop;

    public function __construct()
    {
        parent::__construct();
        $this->setDecorationLayout('menu:close');
        $this->buttonStart = $this->addButton('media-playback-start', 'Starts the session');
        $this->buttonStop = $this->addButton('media-playback-stop', 'Stops the session');

        $timer = new Timer();
        $this->buttonStart->widget->GObject->connect('clicked', $timer->start(...));
    }

    private function addButton(string $icon, string $tooltipText): ButtonIcon
    {
        $button = new ButtonIcon($icon);
        $button->widget->setTooltipText($tooltipText);
        $this->packStart($button);
        return $button;
    }
}
