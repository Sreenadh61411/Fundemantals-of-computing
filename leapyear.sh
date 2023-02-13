#!/bin/bash
echo "enter a year:"
read leap
echo taking year as $leap
if [ `expr $leap  % 400` -eq 0 ]
then
    echo "its aleap year"
elif [ `expr $leap % 100` -eq 0 ]
then
echo "its not a lepa year"
elif [ `expr $leap % 4` -eq 0 ]
then
echo "its aleap year"
else
echo "its not a leap year "
fi
