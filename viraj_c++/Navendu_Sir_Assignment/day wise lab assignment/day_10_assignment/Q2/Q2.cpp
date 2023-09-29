//

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
        void Write(){
            cout<<"Enter Day: ";
            cin>>day;
            cout<<"\nEnter Month: ";
            cin>>month;
            cout<<"\nEnter year: ";
            cin>>year;
        }
        void Read(){
            cout<<"Date: \n"<<endl;
            cout<<day<<"\\"<<month<<"\\"<<year<<endl;
        }
        void operator==(date d2){
            if((day==d2.day)&&(month==d2.month)&&(year==d2.year)){
                cout<<"Both are equal \n";
            }
            else cout<<"Different dates \n";
        }
    //Post increment
    date operator++(int){
        date temp = *this;
        ++day;
        return temp;
    }
    //Prefix 
    date operator++(){
        ++day;
        return *this;
    }
};


int main(){
    date d1, d2;
    d1.Write();
    ++d1;
    cout<<"Date 1 is .... \n";
    d1.Read();

    d2.Write();
    d2++;
    cout<<"Date 2 is .... \n";
    d2.Read();

    d1.operator==(d2);

    return 0;
}