#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет количества вхождений элементов в unordered_map:


void countOccurrences(const unordered_map <int, string>& map, const string& value) {
    int count = 0;
    for (const auto& pair : map) {
        if (pair.second == value) {
            count++;
        }
    }
    cout << "Вхождение значения " << value << ": " << count << endl;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_map <int, string> map;
    map[1] = "apple";
    map[2] = "banana";
    map[3] = "orange";
    map[4] = "apple";

    string value = "apple";

    countOccurrences(map, value);

   return 0;
}

