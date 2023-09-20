#!/bin/bash


read  -p"enter num1" n1
read  -p"enter num2" n2

while [ $n1 -lt $n2 ]
do
 echo $n1
n1=`expr $n1 + 1`
 
done


