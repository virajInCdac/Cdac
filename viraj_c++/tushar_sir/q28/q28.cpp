// 28. Write a program which will calculate multiplication of two 3 by 3 matrices.
#include<iostream>
using namespace std;



void accept(int matrix[3][3], int ){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
}

void display(int matrix[3][3], int ){
    cout<<"matrix is:\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void multi(int first[3][3], int second[3][3], int multi[3][3], int ){
    for(int i=0; i < 3; i++){
    
        for(int j = 0; j < 3; j++){
            int sum = 0 ;
            }	
            
            for (int k = 0; k < 3; k++){
        		sum = sum + first[i][k]*second[k][j];
      			  multi[i][j] = sum ;
      		  }
    }
   /*
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            rslt[i][j] = 0;
  
            for (int k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
  
            printf("%d\t", rslt[i][j]);
        }
  
        printf("\n");
    }
}
  */

}
int main(){
    int first_matrix[3][3],second_matrix[3][3],matrix_multiflied[3][3];
    // Accepting first Matrix
        cout<<"Enter the elements for first matrix : ";
        accept(first_matrix, 3);
        display(first_matrix, 3);
    // Accepting second matrix
        cout<<"Enter the elements for second matrix : ";
        accept(second_matrix, 3);
        display(second_matrix, 3);
    // Multiplication of matrix here
        multi(first_matrix, second_matrix, matrix_multiflied, 3);
    // Display result
        display(matrix_multiflied, 3);
    
    return 0;
}
