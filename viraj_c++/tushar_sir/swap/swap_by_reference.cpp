#include<iostream>
using namespace std;
void swap(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;

}

int main(){
    int first_number, second_number;
    cout<<"Enter the numbers to swap: ";
    cin>>first_number >> second_number;
    swap(first_number,second_number);
    cout<<first_number<<" "<<second_number;
    return 0;
}