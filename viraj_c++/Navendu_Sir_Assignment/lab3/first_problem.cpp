#include<iostream>
using namespace std;

int main(){
    //Initilization
    int number_of_students = 0;
    cout<<"enter the num of students: ";
    cin>>number_of_students;
    string names[number_of_students], name, grade[number_of_students], last_name[number_of_students];
    double assignment1[number_of_students], assignment2[number_of_students], assignment3[number_of_students], average[number_of_students], marks;
    for (int i = 0; i<number_of_students; i++){
        cout<<"Enter name: ";
        cin>>name;
        names[i] = name;
        cout<<"Enter last_name: ";
        cin>>name;
        last_name[i] = name;
        do {
            cout<<"Marks for assignment 1 between 0 to 100: "<<endl;
            cin>>marks;
        }while(marks > 100 || marks < 0);

        assignment1[i] = marks;
        do {
            cout<<"Marks for assignment 2 between 0 to 100: "<<endl;
            cin>>marks;
        }while(marks > 100 || marks < 0);
        assignment2[i] = marks;
        do {
            cout<<"Marks for assignment 3 between 0 to 100: "<<endl;
            cin>>marks;
        }while(marks > 100 || marks < 0);
        assignment3[i] = marks;
        average[i] = (assignment1[i] + assignment2[i] + assignment3[i])/3;
        switch (int(average[i]))
        {
        case 90 ... 100:
            grade[i] = 'A';
            break;
        case 80 ... 89:
            grade[i] = 'B';
            break;
        case 70 ... 79:
            grade[i] = 'C';
            break;
        case 60 ... 69:
            grade[i] = 'D';
            break;
        default:
            grade[i] = 'F';
        }
    }
    for (int i = 0; i<number_of_students; i++){
        cout<<"Name is "<<names[i]<<" "<<last_name[i]<<" "<<"Scores are \n"<<assignment1[i]<<endl<<assignment2[i]<<endl<<assignment3[i]<<endl;
        cout<<"Average is: "<<average[i]<<endl<<"Grade is: "<<grade[i]<<endl;
    }
}