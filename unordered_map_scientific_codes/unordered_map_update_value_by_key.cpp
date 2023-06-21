#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обновление значения по ключу в unordered_map:


void updateValue(unordered_map <string, int>& map, const string& key, int newValue) {
    map[key] = newValue;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, int> map;
    map["apple"] = 5;
    map["banana"] = 3;

    string key = "apple";
    int newValue = 10;

    updateValue(map, key, newValue);

    cout << "Обновлено значение для ключа " << key << ": " << map[key] << endl;


   return 0;
}


