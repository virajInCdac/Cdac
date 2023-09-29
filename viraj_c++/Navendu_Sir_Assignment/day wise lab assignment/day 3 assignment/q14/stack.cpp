#include<iostream>
using namespace std;

class stack
{
private:
    int top, *arr, tracking_for_stack = -1, capacity;
public:
    //Have to implement top, push, pop
    //This function will return the top element of an stack
    int Top(){
         if (tracking_for_stack == -1){
            cout << "Under flow";
         } else if (tracking_for_stack == capacity -1){
            cout << "Overflow";
         } else {
            return arr[top];
         }
        // return arr[top];
        return 1;
    }

    void push(int num){
        if (tracking_for_stack < capacity){
            tracking_for_stack++;
            cout << tracking_for_stack << endl;
            arr[tracking_for_stack] = num;
        } else{
            cout << "Stack full";
        }
    }
    stack(int size){
        arr[size];
        capacity = size;
    }

    ~stack(){

    }
};



int main(){
    stack sh(2);
    sh.push(3);
    //cout << "Top is: " << sh.Top();

    return 0;
}