#include<iostream>
using namespace std;

int reverse(int num){
    int temp = 0;
    while (num > 0){
        temp = temp * 10 + num % 10;
        num = num/10;
    }
    return temp;
}

bool isPrime(int num){
    for (int i = 2; i <= num/2; i++){
        if (i % 2 == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num = 0;
    cout << "Enter a number to be reversed: ";
    cin >> num;
    cout << "Reversed number is: "<< reverse(num) << endl;
    cout << "Is the number prime? "<< (isPrime(num)? "True": "False");

}