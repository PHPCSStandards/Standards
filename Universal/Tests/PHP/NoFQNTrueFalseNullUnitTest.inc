<?php

$thisIsFine = true;
$thisIsFine = False;
$thisIsFine = NULL;

// Namespaced names should be left alone.
$fullyQualified = \Fully\True\Qualified;
$nsRelative = namespace\Null;
$partiallyQualified = False\Something\Something;

/* These should all be flagged */
$notOkay = \true;
$notOkay = \false;
$notOkay = \   null;

$notOkay = \TRUE;
$notOkay = \/*comment*/False;
$notOkay = \nULl;

class UseInTypes {
    const MyClass|\TRUE CONSTANT_NAME = new MyClass;

    public readonly \False|float|\null $property;

    public function foo(string|\false $name) : \NULL|int {}
}
