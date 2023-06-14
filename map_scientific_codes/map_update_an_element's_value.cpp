#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обновление значения элемента в map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Обновление значения элемента
    string name = "Alice";
    if (scores.count(name) > 0) {
        scores[name] = 100;
        cout << "Updated score of " << name << ": " << scores[name] << endl;
    } else {
        cout << name << " is not present in the map" << endl;
    }





  return 0;
}





