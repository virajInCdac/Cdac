#include<iostream>
using namespace std;
class BigInt 
{
    int n;
public:
    BigInt():n(5){}
    BigInt(int m):n(m){}
    BigInt operator+(BigInt obj){
        return (n+obj.n);
    }
    BigInt operator-(BigInt obj){
        return (n-obj.n);
    }
    BigInt operator*(BigInt obj){
        return (n*obj.n);
    }
    BigInt operator/(BigInt obj){
        return (n/obj.n);
    }
    BigInt operator++(){
        n++;
        return (*this);
    }
    BigInt operator++(int){  
        BigInt temp=*this;
        n++;
        return (temp);
    }
    BigInt operator+(){
        return (*this);
    }
    BigInt operator-(){   
        n*=-1;
        return (*this);
    }
     BigInt operator--(){   
        n--;
        return (*this);
    }
    BigInt operator--(int){
        BigInt temp=*this;
        n--;
        return (temp);
    }
    void display(){
        cout<<"\n the BigInt is :- "<<n <<endl;
    }  
};
int main(){
    int a, b;
    cout << "Enter 2 ints: ";
    cin >> a >> b;
    BigInt obj1(a);
    //Pre incriment 
    BigInt obj2=obj1;
    BigInt obj3=obj2*obj1;
    obj2.display();
    obj1.display();
    BigInt obj4=obj1+b;
    cout<<"\n After addition :- " << endl;
    obj4.display();
    cout << "After squaring" << endl;
    obj3.display();
    -obj4; cout<<"\n after - uinarry operator :- " << endl;
    obj4.display();
    return 0;
}
    