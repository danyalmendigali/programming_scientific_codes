#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обход всех элементов unordered_map с использованием итераторов:


void iterateMap(const  unordered_map<string, int>& map) {
    for (auto it = map.begin(); it != map.end(); ++it) {
        cout << "Ключ: " << it->first << ", Значение: " << it->second << endl;
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, int> map;
    map["apple"] = 5;
    map["banana"] = 3;
    map["orange"] = 7;

    iterateMap(map);



   return 0;
}

