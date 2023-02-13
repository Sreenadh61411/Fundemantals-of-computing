x#!/bin/bash
echo "enter a value:"
read a
echo "enter b value:"
read b
echo "enter c value:"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo " $a is greater."
elif [ $b -gt $c ] && [ $b -gt $a ]
then
    echo " $b is greater."
else
    echo " $c is greater."
fi
