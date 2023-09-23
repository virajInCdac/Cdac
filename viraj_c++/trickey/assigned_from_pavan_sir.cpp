#include<iostream>
using namespace std;


int main(){
    string str;
    int num;
    //cin>> str >> num;
    getline(cin, str);
    cin>>num;

    cout<< str <<" is string "<< num<<" is number.";


    return 0;
}