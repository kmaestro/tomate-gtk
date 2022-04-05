<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\HeaderBar;

class Header extends HeaderBar
{
    public function __construct()
    {
        parent::__construct();
        $this->setDecorationLayout('menu:close');
    }
}
