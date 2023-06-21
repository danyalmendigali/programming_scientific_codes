#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на анаграмму нескольких строк с использованием unordered_set:


bool areAnagrams(const vector <string>& strings) {
    unordered_set <string> anagramSet;
    for (const string& str : strings) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramSet.insert(sortedStr);
    }
    return anagramSet.size() == 1;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<string> strings = {"listen", "silent", "tinsel"};

    if (areAnagrams(strings)) {
        cout << "Все строки являются анаграммами" << endl;
    } else {
        cout << "Строки не являются анаграммами" << endl;
    }



   return 0;
}




