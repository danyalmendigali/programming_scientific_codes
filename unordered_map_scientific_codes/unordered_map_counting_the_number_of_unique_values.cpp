#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества уникальных значений в unordered_map:


int countUniqueValues(const unordered_map<int, int>& map) {
    unordered_set <int> uniqueValues;
    for (const auto& pair : map) {
        uniqueValues.insert(pair.second);
    }
    return uniqueValues.size();
}




int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, int> map;
    map[1] = 5;
    map[2] = 3;
    map[3] = 5;
    map[4] = 7;

    int uniqueCount = countUniqueValues(map);

    cout << "Количество уникальных значений: " << uniqueCount << endl;




   return 0;
}

