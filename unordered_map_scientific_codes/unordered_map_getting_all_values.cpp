#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение всех значений из unordered_map:


void getAllValues(const unordered_map<int, string>& map) {
    for (const auto& pair : map) {
         cout << "Value: " << pair.second << endl;
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

    getAllValues(map);



   return 0;
}


