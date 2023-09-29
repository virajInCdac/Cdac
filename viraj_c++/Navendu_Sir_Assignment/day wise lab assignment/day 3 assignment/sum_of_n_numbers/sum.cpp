#include<iostream>
using namespace std;

int sum_of_numbers(int inital, int last){
    //Using arithmetic progression
    return float(last-inital +1)/2*(inital + last);
}

int main(){
    int initial_number, final_number, sum;
    cout<<"Enter initial & final numbers: "<<endl;
    cin>> initial_number >> final_number;
    sum = sum_of_numbers(initial_number, final_number);
    cout<<"Sum is = "<<sum;
}