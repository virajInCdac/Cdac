#include<iostream>
using namespace std;


int main(){
    int number, reverse = 0;
    cout<<"Enter the number: ";
    cin>>number;
    while (number !=0)
    {
        reverse = reverse * 10 + number % 10;
        number = number/10;
    }
    int temp = 0;
    while (reverse !=0)
    {
        temp = reverse % 10;
        reverse = reverse/10;
        enum words {Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine};
        switch (temp)
        {
        case 0:
            cout<<"Zero ";
            break;
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
        default:
            break;
        }
    }   
}