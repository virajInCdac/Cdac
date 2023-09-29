//string class and overload relational operator
#include<iostream>
//#include<string.h>
using namespace std;

class String{
    string str;

    public:
        String(string s){
            str = s;
        }
        String(const char str1[100]){
            int i;
            for(i=0; str1[i]!='\0';i++)
                str[i]=str1[i];
           str[i]='\0';

        }
        void display(){
            cout<<"string is   : "<<str<<endl;
        }
        bool operator==(String obj2){
            
            int result =0;
            for( int i=0; (str[i]!='\0')||(obj2.str[i]!='\0'); i++){
                if(str[i]==obj2.str[i])
                result=1;

                else
                result=0;
            }
            
           return result;
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