#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение ключа с наибольшим значением в unordered_map:


string getKeyWithMaxValue(const unordered_map <string, int>& map) {
    auto it = max_element(map.begin(), map.end(), [](const auto& pair1, const auto& pair2) {
        return pair1.second < pair2.second;
    });

    if (it != map.end()) {
        return it->first;
    }

    return "";
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, int> map;
    map["apple"] = 5;
    map["banana"] = 3;
    map["orange"] = 7;
    map["grape"] = 4;

    string keyWithMaxValue = getKeyWithMaxValue(map);

    cout << "Ключ с максимальным значением: " << keyWithMaxValue << endl;



   return 0;
}



