#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение суммы всех значений в map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Вычисление суммы значений
    int sum = 0;
    for (const auto& pair : scores) {
        sum += pair.second;
    }

    // Вывод суммы значений
    cout << "Sum of scores: " << sum << endl;

  return 0;
}






