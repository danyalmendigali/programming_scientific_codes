#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на уникальность строк в массиве с использованием unordered_set:

bool hasUniqueStrings(const vector <string>& strings) {
    unordered_set <string> uniqueSet;
    for (const string& str : strings) {
        if (uniqueSet.count(str) > 0) {
            return false;
        }
        uniqueSet.insert(str);
    }
    return true;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <string> strings = {"apple", "banana", "orange", "apple"};

    if (hasUniqueStrings(strings)) {
        cout << "Все строки уникальны" << endl;
    } else {
        cout << "Обнаружены повторяющиеся строки" << endl;
    }



   return 0;
}

