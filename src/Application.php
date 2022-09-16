<?php

namespace Tomate;

use Tomate\UI\Window;

class Application
{
    public function __construct(private Window $window)
    {
    }

    public function run()
    {
        $this->window->run();
    }
}
