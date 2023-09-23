// 26. Write a program to insert an element into an array. Accept position of element to be inserted
// from user.
#include<iostream>
using namespace std;

void array_print(int *a, int n)
{
    cout<<"Your array is: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

void element_add(int *a  , int position, int size, int element)
{
    for(int i = size-2; i > position; i--){
        a[i+1]=a[i];
    }
    a[position-1]= element;    
}

//remeber to subtarct 1 from position_to_be_deleted
int main(){
    int size_of_array, position_to_be_add,new_element;
    cout<<"Enter the size of the array: ";
    cin>>size_of_array;
    int arr[size_of_array];
    // taking user input
    
    for (int i=0; i<size_of_array; i++){
        cout<<"Enter element at "<<i+1<<" position into the array: ";
        cin >> arr[i];
    }
    //before Addition
    array_print(arr, size_of_array);
    cout << "\nEnter the position to be add element: ";
    cin >> position_to_be_add;
    cout<<"\nEnter new element: ";
    cin>>new_element;
    element_add(arr, position_to_be_add, size_of_array, new_element);
    array_print(arr, size_of_array);


 return 0;
}