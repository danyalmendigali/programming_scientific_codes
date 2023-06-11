#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// rfind() в C++ используется для поиска последнего вхождения подстроки или символа в строке. Она возвращает позицию
// первого символа последнего вхождения или std::string::npos, если подстрока или символ не найдены.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, Hello, Hello";

    size_t pos = str.rfind("Hello");

    if (pos != string::npos) {
        cout << "Последнее вхождение найдено на позиции: " << pos << endl;
    } else {
        cout << "Подстрока не найдена" << endl;
    }











   return 0;
}









