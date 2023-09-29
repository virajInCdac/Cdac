#include<iostream>
using namespace std;

int main(){
    int number_to_reverse, reversed_number = 0;
    cout<<"Enter a number to be reversed: "<<endl;
    cin>>number_to_reverse;
    while (number_to_reverse != 0){
        reversed_number = reversed_number * 10 + number_to_reverse%10;
        number_to_reverse = number_to_reverse/10;
    }
    if (reversed_number != 0)
    {
        cout<<"Reversed number = "<<reversed_number;

    }
    
}