#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Замена подстроки в строке:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";
    string substring = "world";
    string replacement = "everyone";

    size_t found = str.find(substring); // Поиск подстроки

    if (found != string::npos) {
        str.replace(found, substring.length(), replacement); // Замена подстроки
        cout << "Result: " << str << endl;
    } else {
        cout << "Substring not found" << endl;
    }



   return 0;
}

