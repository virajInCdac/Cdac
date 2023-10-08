// Design inheritance hierarchy for following (for at least one) and implement it. Write a small program to demonstrate the use.
// - Computer printers
// - Bank accounts
// - Different type of persons - Student, Employee, Artist.
#include<iostream>
using namespace std;

class Person{
    string name;
    int age;
    enum Gender {Male, Female};
    Gender _gender;
    public:
        Gender get_gender() const{
            return _gender;
        }
        Gender set_gender(Gender g){
            _gender = g;
        }
};

int main(){
    Person first_person;
    first_person.set_gender(Gender::Male);

    return 0;
}