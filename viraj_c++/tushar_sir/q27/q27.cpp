// 27. Write a program to accept and display 3 by 3 matrix. Write Accept() and Display() functions to
// perform the tasks.

// a. Find the transpose of a matrix and print the transpose using display() function.
// b. Accept another matrix of same dimensions. Find the addition of two matrices and print the
// resultant matrix.

#include<iostream>
using namespace std;

void accept(int matrix[3][3], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
}

void display(int matrix[3][3], int size){
    cout<<"matrix is:\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int matrix[3][3], int size){
    int i = 0, j =1;
    int tracker_for_j = j;
    for (i; i< size -1; i++){
        for (j = tracker_for_j; j < size; j++){
            int temp = matrix[j][i];
            matrix[j][i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    tracker_for_j++; //j should become 2, then 3 and so on.
    //cout<<"Value of J is "<<j<<endl;
    }
}

void add (int matrix[3][3], int matrixo[3][3], int size)
{
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[i][j]=matrix[i][j]+matrixo[i][j];
        }
    }
}
int main(){
    int matrix[3][3],matrix2[3][3];
    // Accepting first Matrix
        cout<<"Enter the elements for first matrix : ";
        accept(matrix, 3);
    display(matrix, 3);
    // Accepting Second Matrix
        cout<<"Enter the elements for Second matrix 2 :\n";
        accept(matrix2, 3);
    display(matrix2, 3);
    add(matrix2,matrix,3); //Will display at the end.
    cout<<"transpose of first matrix 1";
    transpose(matrix, 3);
    display(matrix, 3);
    cout<<"Additin of two matrix is:\n";
    display(matrix2, 3);
    
    
    return 0;
}