#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// find_first_not_of(): Ищет первое вхождение символа, не являющегося частью указанного набора символов, и возвращает его позицию.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, world!";
    int pos = str.find_first_not_of("Helo, "); // Результат: 7 (первое вхождение символа, не принадлежащего указанному набору)

    cout << pos << endl;










   return 0;
}





