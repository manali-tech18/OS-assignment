#program 8
read -p "Enter a number: " num
if [ $((num % 2)) -eq 0 ]; then
echo "it is even"
else
echo "it is odd"
fi 