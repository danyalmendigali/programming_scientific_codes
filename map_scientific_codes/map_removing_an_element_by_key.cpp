#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элемента по ключу из map:


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Удаление элемента по ключу
    string key = "Bob";
    scores.erase(key);

    // Вывод оставшихся элементов
    for (const auto& pair : scores) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }



  return 0;
}


