// For String, Date and Array classes do following:
// - Identify member functions that should be made constant member function and convert them to constant member functions.
// - Identify where all objects should be passed by reference and make the changes.
//   Also, make changes at appropriate places, to pass them as reference to constant objects.

#include<iostream>
//#include<string.h>
using namespace std;

class String{
    string str;

    public:
        String(const string s) { // a type qualifier is not allowed on a constructor or destructorC/C++(1668) Ex: String(string s)const not allowed
            str = s;
        }
        String(const char str1[100]){
            int i;
            for(i=0; str1[i]!='\0';i++)
                str[i]=str1[i];
           str[i]='\0';

        }
        void display() const{
            cout<<"string is   : "<<str<<endl;
        }
        bool operator==(const String& obj2) const{
            for( int i=0; (str[i]!='\0')||(obj2.str[i]!='\0'); i++){
                if(str[i]!=obj2.str[i])
                return false;
            }
            
           return true;
        }

       

};

int main(){
    string s1, s2;
    cout << "Enter 2 strings: ";
    cin >> s1 >> s2;
    String obj1(s1),obj2(s2);

    obj1.display();
    obj2.display();

    bool result = obj1==obj2;

    if(result==true) {
        cout<<"both equal" <<endl;
    }else{
        cout<<"both different" <<endl;
    } 

    return 0;
}