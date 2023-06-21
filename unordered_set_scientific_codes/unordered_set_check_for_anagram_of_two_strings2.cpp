#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на анаграмму двух строк с использованием unordered_set:

bool areAnagrams(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    unordered_set<char> charSet;

    for (char ch : str1) {
        charSet.insert(ch);
    }

    for (char ch : str2) {
        if (charSet.count(ch) == 0) {
            return false;
        }
    }

    return true;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string str1 = "listen";
    string str2 = "silent";

    if (areAnagrams(str1, str2)) {
        cout << "Строки анаграммы" << endl;
    } else {
        cout << "Строки не анаграммы" << endl;
    }



   return 0;
}


