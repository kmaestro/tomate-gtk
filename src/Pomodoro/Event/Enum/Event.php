<?php

namespace Tomate\Pomodoro\Event\Enum;

enum Event: int
{
    case timerStart = 0;
    case timerUpdate = 1;
    case timerStop = 2;
    case timerEnd = 3;

    case sessionReady = 4;
    case sessionStart = 5;
    case sessionInterrupt = 6;
    case sessionChange = 7;
    case sessionEnd = 8;
    case sessionReset = 9;

    case windowShow = 10;
    case windowHide = 11;

    case configChange = 12;
}
