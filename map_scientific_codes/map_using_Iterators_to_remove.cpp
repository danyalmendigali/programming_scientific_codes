#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для удаления элементов из map:

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Удаление элементов с помощью итераторов
    map <string, int>::iterator it = scores.find("Bob");
    if (it != scores.end()) {
        scores.erase(it);
        cout << "Element with key 'Bob' is removed from the map" << endl;
    } else {
        cout << "Element with key 'Bob' is not found in the map" << endl;
    }


  return 0;
}













