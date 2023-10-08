#include<iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("t.txt");    
    if (file.is_open()){
        cout << "open" << endl;
    } else{
        cout << "Not open" <<endl;
    }
    


    return 0;
}