#include<iostream>
using namespace std;

int main(){
    int a = 40;
    int &b = a; //Reference 
    int *c = &a; //Pointer
    cout << &a <<endl;
    cout << &b <<endl;
    cout << &c <<endl;
    cout<< sizeof(int *) << endl;
    cout<< sizeof(int) <<endl;
}