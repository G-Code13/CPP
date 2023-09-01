#ifndef Name_H
#define Name_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Name{

    private:
        string firstName;
        string middleName;
        string lastName;

    public:
        Name(){
            firstName = "John";
            middleName = "H.";
            lastName = "Doe";
        }

        Name(string firstName, string middleName, string lastName){
            this->firstName = firstName;
            this->middleName = middleName;
            this->lastName = lastName;
        }

        string getFirstLast(){
            return this->firstName + " " + this->middleName + " " + this->lastName;
        }

        void printName(){
            cout << this->firstName << " " << this->middleName << " " << this->lastName << endl;
        }
};
#endif