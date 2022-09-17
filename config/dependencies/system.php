<?php

use Tomate\Plugin\PluginSystem;
use Psr\Container\ContainerInterface;
use Tomate\Plugin\BasePlugin\StartAppPlugin;

return [
    PluginSystem::class => DI\Factory(function (ContainerInterface $c) {
        $pluginSystem = new PluginSystem();
        $pluginSystem->setPlugins(
            [
                $c->get(StartAppPlugin::class)
            ]
        );
        return $pluginSystem;
    }),
];
