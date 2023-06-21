#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет частоты встречаемости элементов:

void countFreqency(const unordered_map <int, int>& map) {
    for(const auto& pair : map) {
        cout << "Элемент: " << pair.first << ", Частота: " << pair.second << endl;
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, int> map;
    map[1] = 3;
    map[2] = 2;
    map[3] = 1;

    countFreqency(map);



   return 0;
}



