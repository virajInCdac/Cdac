#include<iostream>
using namespace std;

int main()
{
    int number,rev=0,i;
    cout<<"Enter the number\n";
    cin>>number;
    if(number!=0)
    	{
    	while(number!=0)
    		{
    	 	i=number%10;
    		rev=rev*10+i;
    		number/=10;
    	}
    	cout<<rev;
    	}
    else cout<<"invalid number";	
    
    return 0;
}
