#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элемента из unordered_map:


void removeElement(unordered_map <int, string>& map, int key) {
    auto it = map.find(key);
    if (it != map.end()) {
        map.erase(it);
        cout << "Элемент с ключом " << key << " удалено с map" << endl;
    } else {
        cout << "Ключ " << key << " в map не найден" << endl;
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
    removeElement(map, key);


   return 0;
}
