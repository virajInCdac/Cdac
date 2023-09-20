#include<iostream>
using namespace std;


int main(){
    int *temp;
    cout<<"Temp1 = "<<&temp<<" "<<*temp<<endl;
    int* temp2 = nullptr;
    cout<<"Temp2 = "<<&temp2<<" "<<*temp2<<endl;
}