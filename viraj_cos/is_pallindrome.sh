read -p"enter string first - " s1
 
l=`expr ${#s1} - 1`
i=0
echo $l
while [ $i -lt $l ]
do
if [ ${s1:$i:1} != ${s1:$l:1} ]
then echo "not palibndrome"
break
else echo "its pallindrome"
break
fi

i=`expr $i + 1`
l=`expr $l - 1`
done


