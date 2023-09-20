//22. Write a program to accept date, month, year from the user in a function called getDate(), and
//print that date in main() in dd/mm/yy format.


#include<iostream>
using namespace std;

void getDate(int day, int month, int year){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}



int main(){

    int day, month, year; 

    cout<<"Enter Day Month and Year: ";
    cin >> day>> month>> year;
    getDate(day, month, year);
    
    


return 0;
}