#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия значения в map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Проверка наличия значения
    int targetScore = 80;
    bool found = false;
    for (const auto& pair : scores) {
        if (pair.second == targetScore) {
            found = true;
            break;
        }
    }

    // Вывод результата
    if (found) {
        cout << "Value " << targetScore << " is present in the map" << endl;
    } else {
        cout << "Value " << targetScore << " is not present in the map" << endl;
    }


  return 0;
}





