#include<iostream>
using namespace std;

void factor(int number){
    // list of factors will have some factors followed by some zeros
    int list_of_factors[number];
    cout<<"factors for number are: ";
    for (int i=1; i<=number; i++){
        if(number % i == 0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main(){
    int number;
    cout<<"Enter a number to get it's factors: "<<endl;
    cin>>number;
    //changed code to be applicable for negative numbers
    if(number < 0)
    number*=-1;
    factor(number);
    return 0;
}