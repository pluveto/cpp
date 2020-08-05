<?php



function func($arr, $set, $index)
{
    if ($index == count($set)) {
        echo "{" . join(", ", $arr) . "}\n";
        return [null, null];
    }
    $arr1 = $arr;
    array_push($arr,  $set[$index]);
    $arr2 = $arr;
    return [$arr1, $arr2];
}

function wrap($arr, $set, $index)
{
    [$arr1, $arr2] = func($arr, $set, $index);
    //var_dump([$arr1, $arr2]);
    if ($arr1 === null) return;
    $index++;
    var_dump("index " . $index);
    wrap($arr1,  $set, $index);
    wrap($arr2,  $set, $index);
}

$set = [1, 2, 3];

wrap([], $set, 0);
