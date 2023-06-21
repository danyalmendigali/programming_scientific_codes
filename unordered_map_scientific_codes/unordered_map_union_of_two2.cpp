#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух unordered_map:


unordered_map <string, int> mergeMaps(const  unordered_map <string, int>& map1, const unordered_map <string, int>& map2) {
    unordered_map <string, int> mergedMap = map1;
    mergedMap.insert(map2.begin(), map2.end());
    return mergedMap;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <string, int> map1;
    map1["apple"] = 5;
    map1["banana"] = 3;

    unordered_map <string, int> map2;
    map2["orange"] = 7;
    map2["grape"] = 4;

    unordered_map <string, int> mergedMap = mergeMaps(map1, map2);

    for (const auto& pair : mergedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }


   return 0;
}


