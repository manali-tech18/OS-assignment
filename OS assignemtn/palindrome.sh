#!/bin/bash
#program 2
#asking user for input
read -p "Enter string: " str

rev_str=$(echo "$str" |rev)
if [ "$str"=="$rev_str" ];
then
echo "It is a palindrome"
else
echo "It is not a palindrome"
fi