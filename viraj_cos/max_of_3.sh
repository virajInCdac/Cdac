#!/bin/bash

#max of 3 numbers

read -p "Enter 3 numbers: " num1 num2 num3

if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ];
then
	echo "$num1 is the best"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ];
then 
	echo "$num2 is the best"
else
	echo "$num3 is the best"
fi
