#include <iostream>
using namespace std;

int main(){

        
        const double salesTax = .04;
        const double countyTax = .02;
        

        cout << "Enter the total amount of sales: ";
        double sales; 
        cin >> sales ;

        double totalSalesTax = sales * salesTax;
        double totalCountyTax = sales * countyTax;
        double totalNet = sales - totalSalesTax - totalCountyTax;

        cout << "Sales $" << sales << endl;  
        cout << "Sales Tax $" << totalSalesTax << endl;
        cout << "County Tax $" << totalCountyTax << endl;
        cout << "Total net sales: $" << totalNet << endl;

    return 0;
}