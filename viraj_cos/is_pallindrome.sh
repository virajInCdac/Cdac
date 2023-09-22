read -p"enter string first - " s1

#lenght -1 to get actual word length in expression.
l=`expr ${#s1} - 1`
i=0
echo $l
while [ $i -lt $l ]
do
#here s1 is the input value and i indicates the starting digit of the inpput, wheras l indicates the last of the input. :1 gives character position 	
if [ ${s1:$i:1} != ${s1:$l:1} ]
then echo "not palibndrome"
break
else echo "its pallindrome"
break
fi

i=`expr $i + 1`
l=`expr $l - 1`
done


