//compare two object by overloading relational operators.

#include<iostream>
using namespace std;
class BigInt{
    int num;
    public: 
    BigInt(int num2):num(num2){
    }
    bool operator>(BigInt second_object){
       if(num>second_object.num)
        return 1;

        return 0;
    }
    bool operator<(BigInt second_object){
        if(num<second_object.num){
            return 1;
        }
        return 0;
    }
    bool operator==(BigInt second_object){
        if(num==second_object.num)
        return 1;

        return 0;
    }
    

};

int main(){
    int first, second;
    cout << "enter two Big integers:";
    cin >> first >> second;
    BigInt ob1(first), second_object(second);
    bool result = ob1>second_object;
    if(result == 1) cout<<"\n First Big Int > Second Big Int \n";
    else{
       result = ob1==(second_object);
       if(result==1) cout<<"First Big Int = Second Big Int \n";
       else{
        cout<<"First Big Int < Second Big Int \n";
        
       }
    }
    cout<<endl;
    return 0;
}