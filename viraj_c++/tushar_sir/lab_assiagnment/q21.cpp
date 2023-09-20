// Write a menu driven program, which allows the user to select either a circle or rectangle.
// a. Write a single function areaCircum() that calculates the area and circumference of a circle.
// The values of area and circumference should be printed in main()

// Write a single function areaPeri() that calculates the area and perimeter of a rectangle. The
// values of area and perimeter should be printed in main()

#include<iostream>
using namespace std;

void areaCircum(double radius, double* pa, double* pp){
    *pa = 3.14 *  radius * radius;
    *pp = 2 * 3.14 * radius;
}
void areaPeri(double l, double b, double* pa, double* pp){
    *pa = l * b;
    *pp = 2 *(l+b);
}
int main(){
    int c;
    double radius, area = 0, circumference = 0, len, breadth, perimeter;
    cout<<"Enter the choice\n1: for Circle\n2:for Rectangle\n";
    cin>>c;
    switch(c)
    {
    case 1 :
    
    cout<<"Enter the radius: ";
    cin>>radius;
    areaCircum(radius, &area, &circumference);
    cout<<"Area is "<<area<<" circumference is "<<circumference<<endl;
    break;
    
    case 2 :

    cout<<"Enter the lenth and breadth: ";
    cin>>len>>breadth;
    areaPeri(len, breadth, &area, &perimeter);
    cout<<"Area is "<<area<<" Perimeter is "<<perimeter<<endl; 
    break;

    default :
    cout<<"Wrong option";
    }

 return 0;
}