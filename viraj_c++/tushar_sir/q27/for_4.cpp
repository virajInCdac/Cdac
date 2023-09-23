// 27. Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to
// perform the tasks.

// a. Find the transpose of a matrix and print the transpose using display() function.
// b. Accept another matrix of same dimensions. Find the addition of two matrices and print the
// resultant matrix.

#include<iostream>
using namespace std;

void accept(int matrix[4][4], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cin>>matrix[i][j];
        }
    }
}

void display(int matrix[4][4], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int matrix[4][4], int size){
    int i = 0, j =1;
    int tracker_for_j = j;
    for (i; i< size -1; i++){
        for (j = tracker_for_j; j < size; j++){
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    tracker_for_j++; //jshould become 2, then 3 and so on.
    cout<<"Value of J is "<<j<<endl;
    }
}

//Works for 3*3 martix only, small flaw with updating the value of J
// void transpose(int matrix[4][4], int size){
//     int i = 0, j =1;
//     //int tracker_for_j = j;
//     for (i; i< size -1; i++){
//         for (j = 1; j < size; j++){
//             int temp = matrix[j][i];
//             matrix[j][i] = matrix[i][j];
//             matrix[i][j] = temp;
//         }
//     //tracker_for_j++; //jshould become 2, then 3 and so on.
//     cout<<"Value of J is "<<j<<endl;
//     }
// }

int main(){
    int matrix[4][4];
    accept(matrix, 4);
    display(matrix, 4);
    transpose(matrix, 4);
    cout<<endl;
    display(matrix, 4);
    return 0;
}