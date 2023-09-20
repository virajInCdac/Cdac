// 22. Write a program to accept date, month, year from the user in a function called getDate(), and
// print that date in main() in dd/mm/yy format.

#include<iostream>
#include<cctype>
using namespace std;

void getDate(int *day, int *month, int *year){
cout<<*day<<"/"<<*month<<"/"<<*year%100;
}


int main(){
    int day, month, year;
    cout<<"Enter the day, month and year: ";
    cin>>day>>month>>year;
    
    getDate(&day, &month, &year);
    


 return 0;
}