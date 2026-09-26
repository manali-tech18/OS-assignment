!/bin/bash
#program 6
for i in {1..10}
do
    echo $i
done

i=10
while [ $i -ge 1 ]
do
    echo $i
    i=$((i-1))
done

echo "Enter number"
read n
for i in {1..10}
do
echo "$n x $i = $((n*i))"
done

echo "Enter N:"
read n
i=1
sum=0
while [ $i -le $n ]
do
    sum=$((sum+i))
    i=$((i+1))
done
echo "Sum = $sum"

