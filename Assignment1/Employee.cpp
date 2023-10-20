#include "Name.h"
#include "Employee.h"
#include "Address.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    Name n;
    Address A;
    Employee e;

    cout << "\nEmployee e: " << endl;
    e.printEmployee();

    Name n1("George", "Victor", "Meghabghab");
    Address a1("603 S. Germantown Rd", "Chattanooga", "TN", "37411");
    string ssn1 = "987-65-4321";
    Employee e1(n1, a1, ssn1);

    cout << "\nEmployee e1: " << endl;
    e1.printEmployee();

    
    return 0;
}