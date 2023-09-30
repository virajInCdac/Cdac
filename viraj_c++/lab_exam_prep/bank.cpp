#include<iostream>
#include<vector>
using namespace std;

class bank
{
private:
    string acc_type,acc_holder_name;
    static int acc_number_for_reference;
    int account_number;
    double acc_bal;

public:
    bank():account_number(1001){
    }
    ~bank(){

    }
    int get_account_number (){
        return acc_number_for_reference;

    }
    void set_account_number (){
        account_number = acc_number_for_reference +1;
    }
};

int bank :: acc_number_for_reference = 1001;

bool welcome(){
    int i;
    cout<<"For new customer enter 1\nFor existing customer enter 2"<<endl;
    cin>>i;
    switch (i)
    {
    case 1:
        return false;
    case 2:
        return true;
    default:
        cout<<"Invalid entry"<<endl;
        break;
    }
    return false;
}

int main(){
    //bank firstcust;
    vector <bank> customer;
    bool is_present;
    bank s;
    customer.push_back(s);
    while (true)
    {
        is_present = welcome();
    if (is_present){
        int acc_entered;
        cout << "Enter your account number ";
        cin >> acc_entered;
        for (int i = 0; i < customer.size(); i++){
            if (customer[i].get_account_number() == acc_entered){
                cout << "Logged in!";
            }
        }
    } else{
        bank new_cust;
        new_cust.set_account_number();
        customer.push_back(new_cust);
    }
    }
    
    


    return 0;
}