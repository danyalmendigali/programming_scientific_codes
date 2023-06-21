#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка пустоты unordered_map:


bool isEmpty(const unordered_map <int, string>& map) {
    return map.empty();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map;

    if (isEmpty(map)) {
        cout << "Map пустой" << endl;
    } else {
        cout << "Map не пустой" << endl;
    }


   return 0;
}
