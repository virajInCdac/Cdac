#include<iostream>
using namespace std;
void ref(int (&arr)[]){
    // cout<<arr[2];
    cout<<sizeof(*arr)/sizeof(arr[0]);
    cout<<*arr;
    for(int i=0;i != NULL ;i++){
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={2,3,4 ,NULL};
    ref(arr);

}