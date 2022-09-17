<?php

namespace Tomate;

use PGtk\Gtk\GLib\MainLoop;
use Sabre\Event\EventEmitter;
use Tomate\Plugin\PluginSystem;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\UI\Window;

class Application
{
    public function __construct(
        private readonly Window   $window,
        private readonly MainLoop $mainLoop,
        private readonly PluginSystem $pluginSystem,
        private readonly EventEmitter $emitter
    ) {
        $this->pluginSystem->handle();
        $this->emitter->emit(Event::startApp->name);
    }

    public function run()
    {
        $this->window->show();
        $this->window->connect('destroy' , function () {
            $this->mainLoop->quit();
            $this->emitter->emit(Event::windowHide->name);
        });
        $this->mainLoop->run();
    }

    public function __destruct()
    {
        $this->emitter->emit(Event::stopApp->name);
    }
}
