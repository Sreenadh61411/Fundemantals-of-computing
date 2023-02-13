#!/bin/bash
echo "enter the number:"
read n
temp=$n
while ((temp>0))
do
ans=$((ans*10))
mod=$((temp%10))
ans=$((ans+mod))
temp=$((temp/10))
done
if (( $n == $ans ))
then
echo "it's a palindrome.."
else
echo "not apalindrome.."
fi
