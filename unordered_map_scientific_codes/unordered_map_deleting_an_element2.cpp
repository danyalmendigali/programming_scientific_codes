#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элемента из unordered_map:


void removeElement(unordered_map <int, string>& map, int key) {
    map.erase(key);
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

    removeElement(map, key);

    for (const auto& pair : map) {
        cout << "Ключ: " << pair.first << ", Значение: " << pair.second << endl;
    }



   return 0;
}

