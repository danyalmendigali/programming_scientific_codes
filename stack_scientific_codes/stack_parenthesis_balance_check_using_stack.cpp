#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка баланса скобок с использованием стека:

bool isBalanced(const string& expression) {
    stack <char> bracketStack;

    for(char c : expression) {
        if(c == '(' || c == '[' || c == '{') {
            bracketStack.push(c);
        }
        else if(c == ')' || c == ']' || c == '}') {
            if(bracketStack.empty()) {
                return false;
          }

          char topBracket = bracketStack.top();
          bracketStack.pop();


          if((c == ')' && topBracket != '(') || (c == ']' && topBracket != '[') || (c == '}' && topBracket != '{')) {
            return false;
          }
       }
    }

    return bracketStack.empty();
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string expression1 = "{(2 + 3) * [4 - 5]}";
    string expression2 = "{(2 + 3) * [4 - 5]";
    string expression3 = "{(2 + 3) * [4 - 5}}";


    cout << expression1 << " - " << (isBalanced(expression1) ? "Сбалансировано" : "Несбалансировано") << endl;
    cout << expression2 << " - " << (isBalanced(expression2) ? "Сбалансировано" : "Несбалансировано") << endl;
    cout << expression3 << " - " << (isBalanced(expression3) ? "Сбалансировано" : "Несбалансировано") << endl;



   return 0;
}
