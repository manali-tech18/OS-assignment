#!/bin/bash
#program 4
n=5
for((i=1;i<=n;i++))
do
for((j=1;j<=n;j++))
do
if [[ $i -eq 1 || $i -eq $n || $j -eq 1 || $j -eq $n ]]; then
echo -n "* "
else
echo -n "  "
fi
done 
echo ""
done