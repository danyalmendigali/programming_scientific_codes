#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на наличие подмножества в set:

bool isSubset(const set <int>& set1, const set<int>& set2) {
    return includes(set1.begin(), set1.end(), set2.begin(), set2.end());
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3, 4, 5};
    set <int> set2 = {2, 4};

    if (isSubset(set2, set1)) {
        cout << "set2 является подмножеством set1" << endl;
    } else {
        cout << "set2 не является подмножеством set1" << endl;
    }


   return 0;
}





