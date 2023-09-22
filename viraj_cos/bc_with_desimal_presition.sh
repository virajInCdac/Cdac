

read -p "enter num 1 " num1
read -p "enter num 2 " num2

if [ $num1 -ne 0 ]
 then echo "valid numbers"
fi

#scale is used to decide the number of desimal valuses
num3= echo "scale=100; $num1/$num2"  | bc

echo $num3 
