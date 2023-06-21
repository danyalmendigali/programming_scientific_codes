#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия значения в unordered_map:


bool containsValue(const unordered_map <int, string>& map, const string& value) {
    for (const auto& pair : map) {
        if (pair.second == value) {
            return true;
        }
    }
    return false;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map;
    map[1] = "apple";
    map[2] = "banana";
    map[3] = "orange";

    string value = "banana";

    if (containsValue(map, value)) {
        cout << "Map содержит значение " << value << endl;
    } else {
        cout << "Map не содержит значение " << value << endl;
    }


   return 0;
}



