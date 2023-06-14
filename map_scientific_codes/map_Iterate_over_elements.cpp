#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long longas
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по элементам map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Итерация по элементам
    for (const auto& pair : scores) {
        cout << "Name: " << pair.first << ", Score: " << pair.second << endl;
    }





  return 0;
}





