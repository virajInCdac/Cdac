#include<iostream>
using namespace std;

bool is_perfect(int number){
    //finding factors
    int sum_of_factos = 0;
    for (int i = 1; i<=number/2; i++){
        if (number % i == 0){
            sum_of_factos = sum_of_factos + i;
        }
    }
    if (sum_of_factos == number)
    {
        return true;
    }else{
        return false;
    }
}

int main(){
    int number;
    cout<<"Enter a number to find if it is perfect: ";
    cin>>number;
    if (is_perfect(number))
    {
        cout<<"Found the perfect number!!! wooooooooooooooo!!!";
    } else{
        cout<<"Not a perfect number, better luck next time...";
    }

}