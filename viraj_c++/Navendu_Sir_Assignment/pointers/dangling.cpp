#include<iostream>
using namespace std;

int *add(int a, int b)
{
    int c = a + b;
    return &c;
}


int main(){
int a=40, b=60;
int *d = add(a , b);
cout<<*d;

    
}