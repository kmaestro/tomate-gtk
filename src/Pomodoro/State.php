<?php

namespace Tomate\Pomodoro;

enum State
{
    case stopped;
    case started;
    case ended;
}
