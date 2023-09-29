#include<iostream>
using namespace std;

void prime_nimbers(int smaller, int larger){
    cout << "The numbers are: ";
    for (int i = smaller; i <= larger; i++){
        if (i % 2 != 0){
            cout <<i<<" ";
        }
        
    }
}

int main(){
    int one, two, smaller, larger;
    cout << "Enter 2 positive integers: ";
    cin >> one >> two;
    if (one < two){
        smaller = one;
        larger = two;
    } else if (two < one){
        smaller = two;
        larger = one;
    } else{
        cout << "Entered numbers are the same";
    }
    prime_nimbers(smaller, larger);
}