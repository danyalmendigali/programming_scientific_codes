#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Очистка unordered_map:


void clearMap(unordered_map <int, string>& map) {
    map.clear();
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map;
    map[1] = "apple";
    map[2] = "banana";
    map[3] = "orange";

    clearMap(map);

    if (map.empty()) {
        cout << "Map пустой после очистки" << endl;
    } else {
        cout << "Map пустой" << endl;
    }


   return 0;
}

