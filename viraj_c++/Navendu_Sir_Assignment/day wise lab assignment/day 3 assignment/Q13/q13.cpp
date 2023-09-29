// 13. Given a positive integer N, print the digits in the number as words.
// For example:
// N = 231
// Result = Two Three One
#include<iostream>
using namespace std;

string words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void finding_digits_and_printing(int original_number){
    int reverse = 0;
    while (original_number != 0){
        reverse = reverse * 10 + original_number % 10;
        original_number = original_number/10;
    }
    while (reverse != 0){
        cout<<words[(reverse % 10)]<<" ";
        reverse = reverse/10;
    }
    
    
}

int main(){
    int number;
    cout << "Enter a number to write in words: ";
    cin >> number;
    finding_digits_and_printing(number);
    return 0;
}