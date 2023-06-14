#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение диапазона элементов с определенным значением в map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;
    scores["David"] = 80;

    // Поиск элементов с определенным значением
    int targetScore = 80;
    auto range = scores.equal_range(targetScore);

    // Вывод результатов
    cout << "Elements with score " << targetScore << ":" << endl;
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Name: " << it->first << ", Score: " << it->second << endl;
    }


  return 0;
}

