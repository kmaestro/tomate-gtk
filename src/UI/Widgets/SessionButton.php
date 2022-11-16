<?php

namespace Tomate\UI\Widgets;

use PGtk\Gtk\Gtk\Box;
use PGtk\Gtk\Gtk\Enum\Orientation;
use PGtk\Gtk\Gtk\ToggleButton;
use Sabre\Event\EventEmitter;
use Tomate\Pomodoro\Config;
use Tomate\Pomodoro\Event\Bus;
use Tomate\Pomodoro\Event\Enum\Event;
use Tomate\Pomodoro\SessionPayload;
use Tomate\Pomodoro\Timer;

class SessionButton
{
    /**
     * @var ToggleButton[]
     */
    private $buttons = [];

    private Box $box;

    private $isBlock = false;

    public function __construct(
        private Bus $bus,
        private EventEmitter $emitter
    ) {
        $this->box = new Box(Orientation::horizontal, 2);
        $this->box->setHomogeneous(true);
        $this->emitter->on('isBlock', function (bool $bool){
            $this->isBlock = $bool;
        });
    }

    public function addButton(string $text, $alias)
    {
        $button = new ToggleButton($text);
        $this->buttons[$alias] = $button;

        $button->connect('clicked' , function (ToggleButton $toggleButton) {
            if ($this->isBlock) {
                $toggleButton->setActive(!$toggleButton->getActive());
                return;
            }
            foreach ($this->buttons as $alias => $button) {
                if ($toggleButton === $button) {
                    $timer = 0;
                    if ($alias === 'DURATION_POMODORO') {
                        $timer = Config::DEFAULTS['DURATION_POMODORO']*60;
                    } elseif ($alias === 'DURATION_SHORT_BREAK'){
                        $timer = Config::DEFAULTS['DURATION_SHORT_BREAK']*60;
                    } elseif ($alias === 'DURATION_LONG_BREAK') {
                        $timer = Config::DEFAULTS['DURATION_LONG_BREAK']*60;
                    }
                    $this->emitter->emit('time', [$timer]);
                    $this->emitter->emit(Event::timerUpdate->name, [new SessionPayload($timer)]);
                    $button->setActive(true);
                } else {
                    $button->setActive(false);
                }

            }
        });
        $this->box->append($button);
    }

    public function onActive($alias)
    {
        foreach ($this->buttons as $button) {
            $button->setActive(false);
        }

        if ($this->buttons[$alias]) {
            $this->buttons[$alias]->setActive(true);
        }
    }

    public function getActiveButtonAlias()
    {
        foreach ($this->buttons as $alias => $button) {
            if ($button->getActive()) {
                return $alias;
            }
        }
    }

    public function content()
    {
        $this->addButton('Pomodoro', 'DURATION_POMODORO');
        $this->addButton('Short Break', 'DURATION_SHORT_BREAK');
        $this->addButton('Long Break', 'DURATION_LONG_BREAK');

        return $this->box;
    }

    /**
     * @param bool $isBlock
     */
    public function setIsBlock(bool $isBlock): void
    {
        $this->isBlock = $isBlock;
    }
}