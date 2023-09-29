#include<iostream>
#include<math.h>
using namespace std;

int number_of_digits(int num){
    int digits = 0;
    while (num != 0)
    {
        num = num/10;
        digits++;
    }
    return digits;
}

int most_sig_digit(int num, int digits){
 int r=1, n=digits-1;
     do
            {
            result *= 10;
            --n;
            }while (num != 0) ;
    num = num/(pow(10, digits- 1));
    return num;
}

int main(){
    int number, digits;
    cout<<"Enter a number to obtain most significant digit: ";
    cin>>number;
    digits = number_of_digits(number);
    cout<<"first number is "<< most_sig_digit(number, digits);
}