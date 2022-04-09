<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\ButtonIcon;
use PGtk\Gtk\Gtk\HeaderBar;
use Tomate\Pomodoro\Session;
use Tomate\Pomodoro\Timer;

class Header extends HeaderBar
{
    private ButtonIcon $buttonStart;
    private ButtonIcon $buttonStop;

    public function __construct(Session $session)
    {
        parent::__construct();
        $this->setDecorationLayout('menu:close');
        $this->buttonStart = $this->addButton('media-playback-start', 'Starts the session', $session->start(...));
        $this->buttonStop = $this->addButton('media-playback-stop', 'Stops the session', $session->stop(...));
    }

    private function addButton(string $icon, string $tooltipText, callable $fun): ButtonIcon
    {
        $button = new ButtonIcon($icon);
        $button->widget->setTooltipText($tooltipText);
        $button->widget->GObject->connect('clicked', $fun);
        $this->packStart($button);
        return $button;
    }
}
