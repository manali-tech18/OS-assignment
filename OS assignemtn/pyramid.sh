#!/bin/bash
#program 5
n=5
for((i=1;i<=n;i++))
do
for((space=1;space<=n-i;space++))
do
echo -n "  "
done
for((k=1;k<=2*i-1;k++))
do
echo -n "* "
done
echo ""
done