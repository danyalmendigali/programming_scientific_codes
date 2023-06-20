#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Подсчет уникальных элементов в set:

int countUniqueElements(const set <int>& set) {
    return set.size();
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set< int> set = {1, 2, 3, 2, 4, 5, 3};

    int uniqueCount = countUniqueElements(set);

    cout << "Количество уникальных элементов: " << uniqueCount << endl;


   return 0;
}


