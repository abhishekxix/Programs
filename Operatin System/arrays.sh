#!/bin/sh
a=(10 20 30 40)
i=0

while [ $i -lt ${#a[@]} ]
do
    echo ${a[i]}
    i=`expr $i + 1`
done