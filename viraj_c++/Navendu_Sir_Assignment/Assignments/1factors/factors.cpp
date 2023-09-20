#include<iostream>
using namespace std;

int main()
{
    int input;
    cout<<"Enter the number of your choice : ";
    cin>>input;
    cout<<"Factors of this number are\n";
    
    for(int i=1; i<=input;i++)
    {
        if(input%i==0)
        {
            cout<<i<<" ";   
        }
    }
}	
