// 29. Write a program to accept a string from the user. Write separate functions to perform the
// following:
// a. Find the number of occurrences of given character in the string
// b. Find the number of blank spaces in the string.
// c. Find the number of words in the string.
// d. Find the total number of all the vowels in the string.

#include<iostream>
#include<string>
using namespace std;


int string_traverce(string s, char input){
    int count = 0;
    for(int i = 0; i <= s.length(); i++){
        if(s[i]==input)
        count++;
    } 
    return count;
}

void occurance(string input, char check){
    int count=string_traverce(input, check);
    cout<<"The charactor \'"<<check<<"\' has occured : "<<count<<" times in string.\n";
}

void count_blank(string input){
    int count=string_traverce(input, ' ');
    cout<<"The blankspace ' ' has occured : "<<count<<" times in string.\n";
}

void word_count(string input){

}


void vowels(string input){
    int count=0;
    
        
 }
int main(){
    string user_input;
    char ch;
    cout<<"Enter the your text: ";
    getline(cin, user_input);
    cout<<"Enter the character to count his occurance : ";
    cin>>ch;  
    occurance(user_input,ch);
    count_blank(user_input);
    


    return 0;
}