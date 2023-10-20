#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool openSymbol(char open){
    return (open == '(' || open == '{' || open == '[');
};

bool closedSymbol(char closed){
    return (closed == ')' || closed == '}' || closed == ']');
};

bool matchingSymbols(char openSymbol, char closedSymbol){
    return ((openSymbol == '(' && closedSymbol == ')') ||
            (openSymbol == '{' && closedSymbol == '}') ||
            (openSymbol == '[' && closedSymbol == ']'));
};

bool isItBalanced(string inputExpression){

    stack<char> symbol;

    for(int i = 0; i < inputExpression.length(); i++){
        char currentSymbol = inputExpression[i];

        if(openSymbol(currentSymbol)){
            symbol.push(currentSymbol);
        }
        else if(closedSymbol(currentSymbol)){
            if(symbol.empty() || !matchingSymbols(symbol.top(), currentSymbol)){
                cout << "Both sides are not the same: " << currentSymbol << " mismatch at: " << i << endl;
                return false;
            }
            else{
                symbol.pop();
            }
        }
    }
    return symbol.empty();
};


int main(){

    // string inputExpression = "{(0+1)*(2+3)}";
    // string inputExpression = "{(0+1)+[4*(2+3)]}";
    // string inputExpression ="{(0+1)+[4*(2+3)}}";

    string inputExpression;
    
    cout << "Enter your expression: ";
        // cin >> inputExpression;
        getline(cin, inputExpression);

    bool balanced = isItBalanced(inputExpression);
        cout << inputExpression << " == " << balanced << endl;

    return 0;
};