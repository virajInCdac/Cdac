#!/bin/bash

read -p" Enter the basic salary" bsal
if [$bsal -lt 1500];
then 
	gsal=$((bsal+((bsal/100)*10)+(bsal/100)*90))
else 
	gsal=$(((bsal+500)+(bsal/100)*98))
fi

echo "Gross salary is: "$gsal
