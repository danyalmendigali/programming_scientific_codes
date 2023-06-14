#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование пользовательской функции сравнения для map:

struct CompareLength {
    bool operator()(const string& str1, const string& str2) const {
        return str1.length() < str2.length();
    }
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int, CompareLength> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Вывод значений
    for (const auto& pair : scores) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << endl;
    }



  return 0;
}










