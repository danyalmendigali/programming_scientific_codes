#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

//  Изменение строки:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";

    str[7] = 'W'; // Изменение символа по индексу
    str.replace(0, 5, "Hi"); // Замена подстроки

    cout << str << endl;




   return 0;
}
