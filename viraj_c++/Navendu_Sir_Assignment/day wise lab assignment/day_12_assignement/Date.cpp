// For String, Date and Array classes do following:
// - Identify member functions that should be made constant member function and convert them to constant member functions.
// - Identify where all objects should be passed by reference and make the changes.
//   Also, make changes at appropriate places, to pass them as reference to constant objects.

#include<iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
        date(): day(0), month(0), year(0){
            //Initilize the values to zero
        }
        date(int d, int m, int y){
            //can use this to enter the date
        }
        void Write(const int& day,const int& month,const int& year){
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void Read() const{
            cout<<"Date: \n"<<endl;
            cout<<day<<"\\"<<month<<"\\"<<year%100<<endl;
        }
        void operator==(date d2) const{
            if((day==d2.day)&&(month==d2.month)&&(year==d2.year)){
                cout<<"Both are equal \n";
            }
            else cout<<"Different dates \n";
        }

};


int main(){
    date d1, d2;
    int day, month, year;
    cout << "Enter day, month & year in the same order:"<<endl;
    cin >> day >> month >> year;
    d1.Write(day, month, year);
    cout<<"Date 1 is .... \n";
    d1.Read();
    cout << "Enter day, month & year in the same order for the second obj:"<<endl;
    cin >> day >> month >> year;
    d2.Write(day, month, year);
    cout<<"Date 2 is .... \n";
    d2.Read();

    d1.operator==(d2);

    return 0;
}