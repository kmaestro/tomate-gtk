<?php

require_once __DIR__ . '/vendor/autoload.php';

use PGtk\Gtk\Gtk;
use Tomate\UI\Window;
use Tomate\UI\Widgets\Header;
use Tomate\UI\Widgets\Countdown;

Gtk::getInstance(__DIR__ . '/lib/_build/gtk/libgtk-4.so');

$w = new Window(new Header(), new Countdown());

$w->run();
