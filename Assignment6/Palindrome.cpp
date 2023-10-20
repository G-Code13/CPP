#include <iostream>
#include <stack>
#include <queue>
#include <string>
// #include <cctype>

using namespace std;

int main(){

    while (true){

    Private:
        string input;

    Public:
        cout << "Enter text in lowercase: "
             << "[to [EXIT]--leave space blank and press enter] ";
        getline(cin, input);

        if (input.empty()){
            break;
        }
        else{
            stack<char> stackInput(stack<char>::container_type(input.begin(), input.end()));
            queue<char> queueInput(queue<char>::container_type(input.begin(), input.end()));

            while(!stackInput.empty() && stackInput.top() == queueInput.front()){
                stackInput.pop();
                queueInput.pop();
            }

            if(stackInput.empty() && queueInput.empty()){
                cout << "The string is a palindrome" << endl;
            }
            else{
                cout << "The string is not a palindrome" << endl;
            }
        }
    }
    return 0;
};