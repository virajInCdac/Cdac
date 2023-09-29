#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(string* a, string* b){
    string temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b, choice;
    string c, d;
    cout << "To swap selet the option given below\n1: Swap Int\n2: Swap Strings\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter 2 numbers: ";
        cin >> a >> b;
        swap(a,b);
        cout <<"Swapped: "<< a <<" & "<< b;
        break;
    case 2:
        cout << "Enter 2 strings: ";
        cin >> c >> d;
        swap(c,d);
        cout << "Swapped: "<<c <<" & "<<d;
    default:
        break;
    }
    
}