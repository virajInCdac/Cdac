#include<iostream>
using namespace std;

int main(){
    int number, product = 1;
    cout<<"Enter a number: ";
    cin>>number;
    while (number>0)
    {
        if (number < 10)
        {
            product = product * number;
            number = number/10;
        } else{
            product = product * number % 10;
            number = number/10;
        }
    }
    cout<<"Product is "<<product;
}