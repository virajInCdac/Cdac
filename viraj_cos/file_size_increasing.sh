#!/bin/bash

i=100000000
touch increasing.txt
while [ $i -gt 0 ]
do
	echo "test" >> increasing.txt 
	((i--))
done
