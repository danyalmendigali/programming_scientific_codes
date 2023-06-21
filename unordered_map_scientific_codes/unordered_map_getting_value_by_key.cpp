#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение значения по ключу из unordered_map:


void getValue(const unordered_map <int, string>& map, int key) {
    auto it = map.find(key);
    if (it != map.end()) {
        cout << "Значение для ключа " << key << ": " << it->second << endl;
    } else {
        cout << "Ключ " << key << " на map не найдено" << endl;
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map;
    map[1] = "apple";
    map[2] = "banana";
    map[3] = "orange";

    int key = 2;

    getValue(map, key);


   return 0;
}

