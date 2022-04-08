<?php

require_once __DIR__ . '/vendor/autoload.php';

use DI\Container;
use PGtk\Gtk\Gtk;
use Tomate\UI\Window;

Gtk::getInstance(__DIR__ . '/lib/_build/gtk/libgtk-4.so');

/** @var Container $container */
$container = require __DIR__ . '/bootstrap/container.php';
$window = $container->get(Window::class);

$window->run();
