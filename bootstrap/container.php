<?php

$builder = new \DI\ContainerBuilder();

$builder->useAutowiring(true);
$builder->useAnnotations(false);

$builder->addDefinitions(require __DIR__ . '/dependencies.php');

return $builder->build();
