#!/bin/bash
read -p "Enter the number:" n


rem=$(($n%2))
if [ $rem -eq 0 ]
then
	echo "$n is even number"
else
	echo "$n is odd number"
fi
