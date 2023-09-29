#include<iostream>
using namespace std;

int number_of_digits(int number);

bool is_armstrong(int number){
    int results= 0;
    int digits = number_of_digits(number);
    int individual_numbers[digits];
    int temp = number;
    //finding individual numbers
    for (int i = 0; i < digits; i++){
        if (temp < 10)
        {
            individual_numbers[i] = temp;
        } else{
            individual_numbers[i] = temp % 10;
            temp = temp/10;
        }
    }
    //updated this part using do-while loop.
    for (int i = 0; i < digits; i++){
        int result = 1;
        int num = digits;
            do
            {
            result *= individual_numbers[i];
            --num;
            }while (num != 0) ;
        
        results+=result;
        
    }
    if (results == number)
    {
        return true;
    } else{
        return false;
    }
    
}

int number_of_digits(int number){
    int digits = 0;
    while (number > 0){
        number = number/10;
        digits++;
    }
    return digits;
}

int main(){
    int number;
    cout<<"Enter a number to check if it is armstrong: ";
    cin>>number;
    if (is_armstrong(number)){
        cout<<"The number is armstrong.";
    } else{
        cout<<"The number is not armstrong.";
    }
}