<?php

namespace Tomate\Plugin\BasePlugin;

use Clue\React\Stdio\Stdio;
use Sabre\Event\EventEmitter;
use Tomate\Plugin\Enums\PluginState;
use Tomate\Plugin\Plugin;
use Tomate\Pomodoro\Event\Enum\Event;

class StartAppPlugin extends Plugin
{
    public function __construct(private EventEmitter $emitter)
    {
    }

    public function handle(...$arguments): mixed
    {
        $this->emitter->on(Event::startApp->name, function () {
            echo 'Start' . PHP_EOL;
        });

        return true;
    }

    public function getState(): PluginState
    {
        return PluginState::enabled;
    }
}