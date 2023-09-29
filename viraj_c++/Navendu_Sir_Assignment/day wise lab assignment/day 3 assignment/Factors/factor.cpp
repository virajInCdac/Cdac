#include<iostream>
using namespace std;

void factor(int number){
    // list of factors will have some factors followed by some zeros
    int list_of_factors[number];
    for (int i=1; i<=number; i++){
        if(number % i == 0){
            cout<<"number is "<<i<<endl;
        }
    }
}

int main(){
    int number;
    cout<<"Enter a number to get it's factors: "<<endl;
    cin>>number;
    factor(number);
    return 0;
}