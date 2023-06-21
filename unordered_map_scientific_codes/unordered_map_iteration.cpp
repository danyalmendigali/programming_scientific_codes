#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по std::unordered_map:


void iterateMap(const unordered_map <int, string>& map) {
    for (const auto& pair : map) {
        cout << "Ключ: " << pair.first << ", Значение: " << pair.second << endl;
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

    iterateMap(map);


   return 0;
}
