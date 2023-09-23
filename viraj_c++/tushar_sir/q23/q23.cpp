// 23. Write a program which accepts two integers in main(). Pass these as arguments to function
// max(). In max(), find the maximum of these two numbers and using a return statement, return
// the address of the maximum number and print it in main().

#include<iostream>
using namespace std;

int *max(int &firts, int &second){
    return firts>second? &firts:&second;
}

int main(){
    int first, second;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>first>>second;
    cout<<max(first,second) <<"and the nuber is "<<*max(first, second);
    return 0;
}