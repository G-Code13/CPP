#include <iostream>
using namespace std;

class NewCircle{

    private:
        int radius = 5;
        double pi = 3.1415;
    
    public:
        void sum(){
            double val = perimeter(radius);
            cout << val << endl;
        }

        double perimeter(int k){
            return (double)(2 * pi * k);
        }}
}
void main(){
    sum();
}