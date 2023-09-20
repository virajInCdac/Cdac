#include<iostream>
using namespace std;

void swaping(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
    
}

int main(){
    int a, b;
    cout<<"Type here!";
    cin>>a;
    cin>>b;
    swap(a,b);
    cout<<a<<b;
}