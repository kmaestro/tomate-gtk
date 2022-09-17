<?php

namespace Tomate\Pomodoro\Event\Enum;

enum Event
{
    case startApp;
    case stopApp;

    case timerStart;
    case timerUpdate;
    case timerStop;
    case timerEnd;

    case sessionReady;
    case sessionStart;
    case sessionInterrupt;
    case sessionChange;
    case sessionEnd;
    case sessionReset;

    case windowShow;
    case windowHide;

    case configChange;
}
