// 24. Accept five integers in an array and use separate functions to:
// a. Find maximum and minimum of the integers. Do not sort the array.
// b. Multiply each element of the array by 5 and store it in another array and display it.

#include<iostream>
using namespace std;

int max(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i<size; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size){
    int min = arr[0];
    for (int i = 1; i<size; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

void mul_by_five(int pach[], int size, int multi[]){
    for(int i=0; i < size; i++)
    {
        multi[i] = pach[i]*5;
        cout<<multi[i]<<" ";
    }

    cout<<"its is array multiplied by five" <<endl;
    
}

int main(){
    
    int capacity_of_array;
    cout<<"Enter the capacity of Array: ";
    cin>>capacity_of_array;
    int input_array[capacity_of_array], multiplied_by_five[capacity_of_array];  
    for (int i =0; i < capacity_of_array; i++){
        cout<<"Enter element "<<i+1 << ": "; 
        cin>>input_array[i];
    }
    cout << max(input_array, capacity_of_array) << " is the maximum" <<endl;
    cout << min(input_array, capacity_of_array) << " is the Minimum" <<endl;
    mul_by_five(input_array,capacity_of_array, multiplied_by_five); // This finction will update the input array and store * 5 value in it.


}