#include <iostream>
#include <list>
#include <cstdlib>

using namespace std;

int countValue(list<int> front, const int item) {
    int count = 0;
    for (const int &number : front) {
        if (number == item) {
            count++;
        }
    }
    return count;
}

void writeLinkedList(list<int> front) {
    cout << "Twenty random numbers listed below" << endl;
    for (const int &number : front) {
        cout << number << " ";
    }
    cout << endl;
}

int main() {

    list<int> randomList;
    srand((unsigned)time(NULL));

    for (int i = 0; i < 20; i++) {
        int randomNumber = rand() % 5; 
        randomList.push_back(randomNumber);
        // cout << randomNumber << " ";
    }
    // cout << endl;
    
    writeLinkedList(randomList);
    
    cout << endl;
    cout << "The number of times that value is shown" << endl;
    
    for (int i = 0; i <= 4; i++) {
        int list = countValue(randomList, i);
        cout << i << ":" << list << " ";
    }
    cout << endl;

    return 0;
}