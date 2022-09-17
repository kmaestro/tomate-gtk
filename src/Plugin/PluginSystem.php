<?php

namespace Tomate\Plugin;

use Tomate\Plugin\Enums\PluginState;

class PluginSystem
{
    public function __construct(private array $plugins = [])
    {
    }

    public function handle(...$arguments): array
    {
        return $this->execute('handle', ...$arguments);
    }

    public function execute(string $method, ...$arguments): array
    {
        $results = [];

        foreach ($this->getPlugins() as $plugin) {
//            var_dump($plugin);
//            die();
            if ($plugin->getState() === PluginState::enabled) {
                $startTime = microtime(true);

                if (! method_exists($plugin, $method)) {
                    continue;
                }

                try {
                    $data = $plugin->{$method}(...$arguments);
                    $results[] = [
                        'success' => true,
                        'plugin' => $plugin,
                        'data' => $data,
                        'time' => microtime(true) - $startTime,
                        'exception' => null,
                    ];
                } catch (\Exception $exception) {
                    $results[] = [
                        'success' => false,
                        'plugin' => $plugin,
                        'data' => null,
                        'time' => microtime(true) - $startTime,
                        'exception' => $exception,
                    ];

                }
            }
        }

        return $results;
    }

    /**
     * @return PluginInterface[]
     */
    public function getPlugins(): array
    {
        return $this->plugins;
    }

    /**
     * @param array $plugins
     * @return $this
     */
    public function setPlugins(array $plugins): self
    {
        $this->plugins = $plugins;

        return $this;
    }
}
