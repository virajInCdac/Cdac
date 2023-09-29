#include<iostream>
using namespace std;

int strlen(string& s){
    int len = 0;
    while (s[len] != '\0'){
        len++;
    }
    return len;
}

void strcpy(string original, int len){
    char copy[len];
    int i = 0;
    while (original[i] != '\0'){
        copy[i] = original[i];
        i++;
    }
    copy[i] = '\0';
    cout<<"The copied string is: " <<copy<< endl;
}

bool compair(string one, string two){
    if (one == two){
        return true;
    }else{
        return false;
    }
}

void to_lower(string s){
    int i = 0;
    while (s[i] != '\0')
    {
        if  (s[i] >= 'A' and s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
        i++;
    }
    cout << "Lower string is: "<<s <<endl;
}

void to_upper(string s){
    int i = 0;
    while (s[i] != '\0')
    {
        if  (s[i] >= 'a' and s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
        i++;
    }
    cout << "Upper string is: "<<s<<endl;
}
int main(){
    string input, first, second;
    int length = 0;
    cout << "Enter a string: ";
    cin >> input;
    length = strlen(input);
    cout << "Lenght of the string is: "<<length<<endl;
    strcpy(input, length);
    cout << "Enter 2 strings to compair: ";
    cin >> first >> second;
    cout <<"Sting match? " << (compair(first, second) ? "True": "False") << endl;
    to_lower(input);
    to_upper(input);
}