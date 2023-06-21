#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка unordered_map по ключу:


void sortMapByKey(const unordered_map <int, string>& map) {
    map <int, string> sortedMap(map.begin(), map.end());
    for (const auto& pair : sortedMap) {
        cout << "Ключ: " << pair.first << ", Значение: " << pair.second << endl;
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);ы

    unordered_map <int, string> map;
    map[3] = "orange";
    map[1] = "apple";
    map[2] = "banana";

    sortMapByKey(map);


   return 0;
}

