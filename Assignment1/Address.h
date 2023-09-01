#ifndef Address_H
#define Address_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Address{

    private:
        string street;
        string city;
        string state;
        string zip;

    public:
        Address(){
            street = "99999 Sunset Boulevard";
            city = "Beverly Hills";
            state = "CA";
            zip = "99999";
        }

        Address(string street, string city, string state, string zip){
            this->street = street;
            this->city = city;
            this->state = state;
            this->zip = zip;
        }

        string getCity(){
            return city;
        }

        string getState(){
            return state;
        }

        string getStreet(){
            return street;
        }

        string getZip(){
            return zip;
        }

        void printAddress(){
            cout << this->street << " " << this->city << " " << this->state << " " << this->zip << endl;
        }
};
#endif