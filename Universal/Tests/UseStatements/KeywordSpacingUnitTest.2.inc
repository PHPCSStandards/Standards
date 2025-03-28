<?php

/*
 * The behaviour of the sniff for this code sample will be different depending on the PHP version.
 * For PHP < 8.0, it will correctly flag this as "no space" after the `use` keyword.
 * For PHP 8.0+, this will no longer be flagged as keywords are allowed in namespaced names,
 * so the `use` is tokenized as `T_STRING` instead of `T_USE` and won't be flagged.
 */
use\Util\MyOtherClass;
