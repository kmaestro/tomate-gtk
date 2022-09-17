<?php

namespace Tomate\Plugin;

use Tomate\Plugin\Enums\PluginState;

abstract class Plugin implements PluginInterface
{
    protected string $name;

    protected string|array $author = 'Unknown';

    protected string $version = '0.0.1';

    protected PluginState $state = PluginState::enabled;

    /**
     * @inheritDoc
     */
    public function getName(): string
    {
        return $this->name;
    }

    /**
     * @inheritDoc
     */
    public function setName(string $name): PluginInterface
    {
        $this->name = $name;

        return $this;
    }

    /**
     * @inheritDoc
     */
    public function getAuthor(): string|array
    {
        return $this->author;
    }

    /**
     * @inheritDoc
     */
    public function setAuthor(array|string $author): PluginInterface
    {
        $this->author = $author;

        return $this;
    }

    /**
     * @inheritDoc
     */
    public function getVersion(): string
    {
        return $this->version;
    }

    /**
     * @inheritDoc
     */
    public function setVersion(string $version): PluginInterface
    {
        $this->version = $version;

        return $this;
    }

    /**
     * @inheritDoc
     */
    public function getState(): PluginState
    {
        return $this->state;
    }

    /**
     * @inheritDoc
     */
    public function setState(PluginState $state): PluginInterface
    {
        $this->state = $state;

        return $this;
    }
}