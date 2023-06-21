#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух unordered_map:


unordered_map<int, string> mergeMaps(const unordered_map <int, string>& map1, const unordered_map <int, string>& map2) {
    unordered_map <int, string> mergedMap = map1;
    mergedMap.insert(map2.begin(), map2.end());
    return mergedMap;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map1;
    map1[1] = "apple";
    map1[2] = "banana";

    unordered_map <int, string> map2;
    map2[3] = "orange";
    map2[4] = "grape";

    unordered_map <int, string> mergedMap = mergeMaps(map1, map2);

    for (const auto& pair : mergedMap) {
        cout << "Ключ: " << pair.first << ", Значение: " << pair.second << endl;
    }


   return 0;
}

