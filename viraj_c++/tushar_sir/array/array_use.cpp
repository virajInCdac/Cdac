//Accept five integers in an array and use separate functions to:
//Find maximum and minimum of the integers. Do not sort the array.
//Multiply each element of the array by 5 and store it in another array and display it.

/*

*/
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

void mul_by_five(int pach[], int size){
    for(int i=0; i < size; i++)
    {
        pach[i]*=5;
        cout<<pach[i]<<" ";
    }

    cout<<"its is array multiplied by five";
    
}

int second_max(int arr[], int size){
    int max = arr[0];
    int second_largest = arr[0];
    for (int i = 1; i<size; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (second_largest < arr[i] && arr[i] < max)
        {
            second_largest = arr[i];
        }
        
    }
    return second_largest;
}

int main(){
    
    int capacity_of_array;
    cout<<"Enter the capacity of Array: ";
    cin>>capacity_of_array;
    int input_array[capacity_of_array];  
    for (int i =0; i < capacity_of_array; i++){
        cout<<"Enter element "<<i+1 << ": "; 
        cin>>input_array[i];
    }
    cout << max(input_array, capacity_of_array) << " is the maximum" <<endl;
    cout << min(input_array, capacity_of_array) << " is the Minimum";
    mul_by_five(input_array,capacity_of_array);
    cout << sec

}
