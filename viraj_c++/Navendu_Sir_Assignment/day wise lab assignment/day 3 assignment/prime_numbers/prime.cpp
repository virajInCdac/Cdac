#include<iostream>
using namespace std;

void check_if_prime(int number){
    for (int i = 2; i<=number/2; i++){
        if (number % i == 0){
            cout<<"Not a Prime number.";
            exit(0);
        }
    }
    cout<<"Number is Prime";
}

int main(){
    int number;
    cout<<"Enter a number to determine if it is prime ";
    cin>>number;
    check_if_prime(number);
    return 0;
}