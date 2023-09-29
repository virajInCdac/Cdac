// 14. Given a positive integer N, print the number in words.
// For example:
// N = 5312
// Result = Five Thousand Three Hundred Twelve

//Works from zero to 9999

#include<iostream>
using namespace std;

static string one_to_nine[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
static string ten_to_ninteen[] = {"Ten", "Eleven", "Tweleve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Ninteen"};
static string twenty_to_ninty[] = {"Twently", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninty"};
static string place_holders[] = {"Hundred", "Thousend"};

int finding_no_of_digits(int num){
    int length = 0;
    while (num > 0){
        length++;
        num = num/10;
    }
    return length;
}

int main(){
    int number, length = 0, temp_number = 0, digit, pass =1 ,last_digit = 0; //Taking temp number so that orignial number is safe
    string output[4];
    cout << "Enter a number: ";
    cin >> number;    
    if (number == 0){
        cout << "Zero";
    } else{
        length = finding_no_of_digits(number);
        temp_number = number;
        last_digit = number % 10;
        while (temp_number > 0){
            cout << digit;
            digit = temp_number % 10;
            temp_number = temp_number/10;
            if (digit == 0){
                // This is meant to do nothing
            } else{
                switch (pass){
                case 1:
                    output[0] = one_to_nine[digit-1];
                    pass++;
                    break;
                case 2:
                    if (digit == 1 && last_digit == 0){
                        output[0] = "";
                        output[1] = ten_to_ninteen[digit - 1];
                    } else{
                        output[1] = twenty_to_ninty[digit - 2];
                    }
                    pass++;
                    break;
                case 3:
                    output[2] = one_to_nine[digit - 1] + " Hundred";
                    pass++;
                    break;
                case 4:
                    output[3] = one_to_nine[digit -1] + "Thousend";
                    pass++;
                    break;
                default:
                    cout << "Unsupported range\n";
                    return 0;
                    break;
                }
            }
        }
        for ( int i = length; i > 0; i--){
            cout << output[i] << " ";
        }
    }
    

    return 0;
}