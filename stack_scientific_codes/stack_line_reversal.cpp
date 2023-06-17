#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Разворот строки с использованием стека:

string reverseString(const string& str) {
    stack <char> charStack;

    for(char c : str) {
        charStack.push(c);
    }


    string reversedStr;
    while(!charStack.empty()) {
        reversedStr += charStack.top();
        charStack.pop();
    }


    return reversedStr;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, World!";
    cout << "Исходная строка: " << str << endl;
    cout << "Разворот строки: " << reverseString(str) << endl;






   return 0;
}
