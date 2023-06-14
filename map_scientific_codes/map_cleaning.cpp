#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Очистка map:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Очистка map
    scores.clear();

    // Проверка пустоты
    if (scores.empty()) {
        cout << "The map is empty" << endl;
    } else {
        cout << "The map is not empty" << endl;
    }

  return 0;
}


