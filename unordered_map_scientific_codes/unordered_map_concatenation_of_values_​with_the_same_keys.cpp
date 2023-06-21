#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение значений с одинаковыми ключами в unordered_map:


void mergeValues(unordered_map <string, int>& map) {
    unordered_map <string, int> mergedMap;
    for (const auto& pair : map) {
        mergedMap[pair.first] += pair.second;
    }
    map = mergedMap;
}




int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, int> map;
    map["apple"] = 5;
    map["banana"] = 3;
    map["orange"] = 7;
    map["apple"] = 2;

    mergeValues(map);

    for (const auto& pair : map) {
        cout << "Ключ: " << pair.first << ", Значение: " << pair.second << endl;
    }


   return 0;
}


