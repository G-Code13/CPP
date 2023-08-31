#include <iostream>
using namespace std;

int main(){

        double sales = 95000;
        const double salesTax = .04;
        const double countyTax = .02;

            cout << "Sales $" << sales << endl;
        double totalSalesTax = sales * salesTax;
            cout << "Sales Tax $" << totalSalesTax << endl;
        double totalCountyTax = sales * countyTax;
            cout << "County Tax $" << countyTax << endl;


    return 0;
}