#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка палиндромности строки с использованием стека:

bool isPalindrome(const string& str)
{
    stack <char> charStack;
    string cleanedStr;


    for(char c : str) {
        if(!isspace(c)) {
            cleanedStr += tolower(c);
        }
    }


    int halfLength = cleanedStr.length() / 2;
    for(int i = 0; i < halfLength; i++) {
        charStack.push(cleanedStr[i]);
    }


    int startIdx = halfLength + (cleanedStr.length() % 2);

    for(int i = startIdx; i < cleanedStr.length(); i++) {
        if(charStack.top() != cleanedStr[i]) {
            return false;
        }

        charStack.pop();
    }



    return true;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str1 = "A man a plan a canal Panama";
    string str2 = "Hello World";


    cout << str1 << " - " << (isPalindrome(str1) ? "Палиндром" : "Не палиндром") << endl;
    cout << str2 << " - " << (isPalindrome(str2) ? "Палиндром" : "Не палиндром") << endl;



   return 0;
}


