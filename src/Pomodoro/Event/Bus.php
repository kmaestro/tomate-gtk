<?php

namespace Tomate\Pomodoro\Event;

use Psr\Container\ContainerInterface;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\UI\Widgets\Countdown;

class Bus
{
    public function __construct(private ContainerInterface $container)
    {
    }

    public function connect(Event $event)
    {

    }

    public function send(Event $event)
    {

        static $i = 0;
        /** @var Countdown $Countdown */
        $Countdown = $this->container->get(Countdown::class);
        $Countdown->update($i++);
    }
}
