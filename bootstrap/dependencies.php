<?php

$files = array_merge(
    glob(__DIR__ . '/../config/dependencies/*.php' ?: []),
    glob(__DIR__ . '/../config/*.php' ?: [])
);

$config = array_map(function ($file) {
    return require $file;
}, $files);

return array_merge_recursive(...$config);
