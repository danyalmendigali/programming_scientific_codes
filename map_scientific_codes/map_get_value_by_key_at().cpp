#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение значения по ключу с использованием map::at():


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Получение значения по ключу
    string key = "Bob";
    int score = scores.at(key);

    // Вывод результата
    cout << "Score for " << key << ": " << score << endl;

  return 0;
}








