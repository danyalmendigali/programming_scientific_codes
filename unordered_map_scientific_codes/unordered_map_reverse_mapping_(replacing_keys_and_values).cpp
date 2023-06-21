#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратное отображение (замена ключей и значений) в unordered_map:


unordered_map <string, int> reverseMap(const unordered_map<int, string>& map) {
    unordered_map <string, int> reversedMap;
    for (const auto& pair : map) {
        reversedMap[pair.second] = pair.first;
    }
    return reversedMap;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map<int, string> map;
    map[1] = "apple";
    map[2] = "banana";
    map[3] = "orange";

    unordered_map <string, int> reversedMap = reverseMap(map);

    for (const auto& pair : reversedMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }



   return 0;
}


