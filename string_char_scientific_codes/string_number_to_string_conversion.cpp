#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратное преобразование числа в строку:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int number = 12345;
    string str;
    stringstream ss;
    ss << number;
    ss >> str;   // Обратное преобразование числа в строку

    cout << "String: " << str << endl;

   return 0;
}
