#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск минимального и максимального элементов в map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Поиск минимального и максимального элементов
    auto minElement = min_element(scores.begin(), scores.end());
    auto maxElement = max_element(scores.begin(), scores.end());

    // Вывод результатов
    cout << "Min Element: " << minElement->first << " - " << minElement->second << endl;
    cout << "Max Element: " << maxElement->first << " - " << maxElement->second << endl;


  return 0;
}


