#include<iostream>
using namespace std;

int reverse(int numb){
    int reversed = 0;
    while (numb > 0)
    {
        reversed = reversed * 10 + numb % 10;
        numb = numb/10;
    }
    return reversed;
}

int main(){
    int numb;
    cout<<"Enter a number to check if it is a palandrome: ";
    cin>>numb;
    if (numb == reverse(numb)){
        cout<<"Number is a palindrome";
    } else{
        cout<<"Number is not a palindrome";
    }
}