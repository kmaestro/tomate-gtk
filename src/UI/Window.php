<?php

namespace Tomate\UI;

use PGtk\Gtk\GLib\MainLoop;
use PGtk\Gtk\Gtk\Box;
use PGtk\Gtk\Gtk\Enum\Orientation;
use PGtk\Gtk\Gtk\Window as BaseWindow;
use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\UI\Widgets\Countdown;
use Tomate\UI\Widgets\Header;

class Window extends BaseWindow
{
    public function __construct(
        public readonly Header    $header,
        public readonly Countdown $countdown,
        private EventEmitter $emitter
    )
    {
        parent::__construct();
        $this->setTitle('Tomate');
        $this->setDefaultSize(350, -1);
        $this->setTitlebar($header);
        $this->setChild($this->content($countdown));
    }

    public function show()
    {
        $this->emitter->emit(Event::windowShow->name);
        $this->widget->show();
    }

    private function content(Countdown $countdown): Box
    {
        $box = new Box(Orientation::vertical, 12);
        $box->append($countdown);
        return $box;
    }
}
