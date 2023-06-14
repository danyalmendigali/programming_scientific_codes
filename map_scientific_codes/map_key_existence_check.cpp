#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия ключа в map с использованием find():

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    map <string, int> scores;

    // Вставка элементов
    scores["Alice"] = 90;
    scores["Bob"] = 80;
    scores["Charlie"] = 95;

    // Проверка наличия ключа
    string name = "Bob";
    auto it = scores.find(name);
    if (it != scores.end()) {
        cout << "Key " << name << " is present in the map" << endl;
    } else {
        cout << "Key " << name << " is not present in the map" << endl;
    }


  return 0;
}


