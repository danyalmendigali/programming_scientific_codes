#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение диапазона элементов с помощью equal_range():


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;
    scores["Alice"] = 85;

    // Получение диапазона элементов с помощью equal_range()
    auto range = scores.equal_range("Alice");
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Name: " << it->first << ", Score: " << it->second << endl;
    }



  return 0;
}









