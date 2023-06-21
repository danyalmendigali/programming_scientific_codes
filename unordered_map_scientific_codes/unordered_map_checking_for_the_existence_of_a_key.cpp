#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия ключа в unordered_map:


bool containsKey(const unordered_map <int, string>& map, int key) {
    return map.find(key) != map.end();
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

    if (containsKey(map, key)) {
        cout << "Map содержит ключ " << key << endl;
    } else {
        cout << "Map не содержит ключ " << key << endl;
    }



   return 0;
}



