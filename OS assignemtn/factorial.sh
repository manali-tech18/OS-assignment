#!/bin/bash
read -p "Enter number: " num
original_num=$num
fact=1
while [ $num -gt 1 ]; do
fact=$((fact*num))
num=$((num-1))
done
echo "Factorial of $original_num is $fact"
