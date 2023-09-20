read -p "Enter the number " a
read b
read c

if [ $a -gt $b ] && [ $a -gt $c ] 
then echo a is greater
elif [ $b -gt $a ] && [ $b -gt $c ]
then echo $b is greater
else echo $c is greater 
fi 
