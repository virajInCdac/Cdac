#!/bin/bash

i=100000
touch increasing.txt
while [ $i -gt 0 ]
do
	echo "test $i" >> increasing.txt 
	((i--))
done
