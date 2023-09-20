#include<iostream>
using namespace std;

void accept(int arr[], int num)
{
    for(int i=0; i < num; i++)
    {
        cin>>arr[i];
    }
}

void display( int *arr, int n){

    for(int i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n, arr[100];

    cout<<"Enter the how many of elements you want: ";
    cin>>n;
    accept(arr,n);
    display(arr, n);
    return 0;
    
}