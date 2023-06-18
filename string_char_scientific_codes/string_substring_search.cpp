#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск подстроки:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";
    string substr = "world";
    size_t found = str.find(substr); // Поиск подстроки

    if (found != string::npos) {
        cout << "Substring found at index " << found << endl;
    }

    else
    {
        cout << "Substring not found" << endl;
    }




   return 0;
}


