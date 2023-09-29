#include<iostream>
using namespace std;

//We need to find the frequency of digits in a number
/*
Example
Number = 12123
Digit = 1
Count of digit 1 in 12123 = 2 (as 1 appears twice in the number)
*/

void frequency(int number, int digit){
    int freq = 0;
    int temp = number;
    //the reason why I am taking number >= 0 insted of number > 0
    //is because of numbers like this 0100, whew digit is 0
    //the below loop will go into an infine loop because we don't know how many zeros are there in the prefix 
    //to remidy this we need to find the lenght of the number first, ie number of digit in number 
    //ex 00100 has 5 digits
    while(number >= 0){
        if (digit == (number % 10)){
            freq++;
        }
        number = number/10;
    }
    cout<< "The "<<temp <<" repeated "<<freq<<" times.";
}

int main(){
    int number, digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a digit: ";
    cin >> digit;
    frequency(number, digit);
}