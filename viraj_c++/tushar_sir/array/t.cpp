//Accept five integers in an array and use separate functions to:
//Find maximum and minimum of the integers. Do not sort the array.
//Multiply each element of the array by 5 and store it in another array and display it.

#include<iostream>
using namespace std;

int max(int ar[]){
    cout<<sizeof(ar)<< "and " <<sizeof(ar[0]);
    int size = sizeof(ar)/sizeof(ar[0]);
    cout<<size;
    return 0;
}

int main(){
    /*
    int capacity_of_array;
    cout<<"Enter the number of elements of your choice: ";
    cin>>capacity_of_array;
    int input_array[capacity_of_array];    
    */
    int arr[4] = {1,5,7,4};
    max(arr);
}

