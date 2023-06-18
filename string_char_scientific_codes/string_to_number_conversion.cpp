#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование строки в число:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "12345";
    int number;
    stringstream ss(str);
    ss >> number; // Преобразование строки в число

    cout << "Number: " << number << endl;



   return 0;
}


