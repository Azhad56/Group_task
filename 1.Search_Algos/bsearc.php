<?php
function binarysearch($arr,$l,$r,$el)
{
    if($r>=$l)
    {
        $mid = ceil(($l + ($r-$l))/2);
        if ($arr[$mid]==$el)
            return floor($mid);
        if ($arr[$mid]>$el) {
            return binarysearch($arr,$l,$mid-1,$el);
        }
        else
        {
            return binarysearch($arr,$mid +1,$r,$el);
        }
    }
    return -1;
}
$arr = array(10,13,20,30,40);
$n = count($arr);
$x = 13;
$result = binarysearch($arr,0,$n-1,$x);
if (($result == -1))
    echo "element not found ";
else
    echo "element found at index ",$result;
?>
