#ifndef Employee_H
#define Employee_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Name.h"
#include "Address.h"

using namespace std;

class Employee{

    private:
        Name employeeName;
        Address employeeAddress;
        string SSN;

    public:
        Employee(){
            Name employeeName("John", "H.", "Doe");
            Address employeeAddress("99999 Sunset Blvd", "Beverly Hills", "CA", "99999");
            SSN = "999-99-9999";
        }

        Employee(Name& employeeName, Address& employeeAddress, string SSN){
            this->employeeName = employeeName;
            this->employeeAddress = employeeAddress;
            this->SSN = SSN;
        }

        Address getAddress(){
            return employeeAddress;
        }

        Name getName(){
            return employeeName;
        }

        string getSSN(){
            return SSN;
        }

        void printEmployee(){
            employeeName.printName();
            employeeAddress.printAddress();
            cout << this->SSN << endl;
        }
};
#endif