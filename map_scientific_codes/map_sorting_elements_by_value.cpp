#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование std::map для сортировки элементов по значению:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;
    scores["David"] = 85;

    // Сортировка элементов по значению
    map<int, string> sortedScores;
    for (const auto& pair : scores) {
        sortedScores[pair.second] = pair.first;
    }

    // Вывод результатов
    for (const auto& pair : sortedScores) {
        cout << "Name: " << pair.second << ", Score: " << pair.first << endl;
    }


  return 0;
}


