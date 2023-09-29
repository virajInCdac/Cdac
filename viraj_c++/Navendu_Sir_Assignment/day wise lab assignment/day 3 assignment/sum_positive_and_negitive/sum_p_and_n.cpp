#include<iostream>
using namespace std;

int main(){
    int number, sum = 0;
    cout<<"Enter a number: ";
    cin>>number;
    if (number < 0){
        number = number * -1;
    }
    while (number>0)
    {
        sum = sum + number % 10;
        number = number/10;
    }
    cout<<"Sum is "<<sum;
}