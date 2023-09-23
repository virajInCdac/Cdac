// 25. Write a program to delete an element from a user entered array. Accept position of element to
// be deleted from user.

#include<iostream>
using namespace std;



void array_print(int *a, int n)
{
    cout<<"Your array is: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int element_delete(int *a, int position, int size)
{
    for (int i = position-1; i< size; i++){
        a[i] = a[i+1];
    }
    return size-1;
    //a[size - 1] = NULL;
}

//remeber to subtarct 1 from position_to_be_deleted
int main(){
    int size_of_array, position_to_be_deleted;
    cout<<"Enter the size of the array: ";
    cin>>size_of_array;
    int arr[size_of_array];
    // taking user input
    
    for (int i=0; i<size_of_array; i++){
        cout<<"Enter element at "<<i+1<<" position into the array: ";
        cin >> arr[i];
    }
    //before deletion
    array_print(arr, size_of_array);
    cout << "Enter the position to be deleted";
    cin >> position_to_be_deleted;
    size_of_array=(arr, position_to_be_deleted, size_of_array);
    array_print(arr, size_of_array);


 return 0;
}