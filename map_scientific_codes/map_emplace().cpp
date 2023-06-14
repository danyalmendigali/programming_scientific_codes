#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование функции emplace для эффективной вставки элементов:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Использование функции emplace для вставки элементов
    scores.emplace("Alice", 90);
    scores.emplace("Bob", 80);
    scores.emplace("Charlie", 95);

    // Вывод значений
    for (const auto& pair : scores) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << endl;
    }



  return 0;
}







