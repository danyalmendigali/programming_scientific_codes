#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Извлечение чисел из строки:



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string text = "The numbers are 42 and 17.5";
    regex regex(R"(\b\d+(\.\d+)?\b)");

    sregex_iterator iterator(text.begin(), text.end(), regex);
    sregex_iterator end;

    while (iterator != end) {
        smatch match = *iterator;
        cout << "Найдено число: " << match.str() << endl;
        ++iterator;
    }



   return 0;
}
