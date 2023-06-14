#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование multimap для хранения нескольких значений с одинаковыми ключами:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    multimap<string, int> scores;

    // Вставка элементов с одинаковыми ключами
    scores.emplace("Alice", 90);
    scores.emplace("Bob", 80);
    scores.emplace("Alice", 95);

    // Вывод значений
    for (const auto& pair : scores) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << endl;
    }



  return 0;
}








