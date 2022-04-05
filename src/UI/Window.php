<?php

namespace Tomate\UI;

use PGtk\Gtk\Gtk\Box;
use PGtk\Gtk\Gtk\Enum\Orientation;
use PGtk\Gtk\Gtk\Window as BaseWindow;
use Tomate\UI\Widgets\Countdown;
use Tomate\UI\Widgets\Header;

class Window extends BaseWindow
{
    private $run = true;

    public function __construct(Header $header, Countdown $countdown)
    {
        parent::__construct();
        $this->setTitle('Tomate');
        $this->setDefaultSize(350, -1);
        $this->setTitlebar($header);
        $this->setChild($this->content($countdown));
    }

    public function run()
    {
        $this->widget->GObject->connect('destroy', $this->quit(...));
        $this->widget->show();
        while ($this->run) {
            $this->widget->GObject->mainContextIteration(null, true);
        }
    }

    private function content(Countdown $countdown): Box
    {
        $box = new Box(Orientation::vertical, 12);
        $box->append($countdown);
        return  $box;
    }

    private function quit()
    {
        $this->run = false;
    }
}
