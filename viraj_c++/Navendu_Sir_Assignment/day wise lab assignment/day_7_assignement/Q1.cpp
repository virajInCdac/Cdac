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

int secondlargest(){
    
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


}