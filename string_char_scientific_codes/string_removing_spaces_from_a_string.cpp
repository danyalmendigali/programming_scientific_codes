#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление пробелов из строки:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "   Hello, world!   ";
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end()); // Удаление пробелов

    cout << "Result: " << str << endl;



   return 0;
}
