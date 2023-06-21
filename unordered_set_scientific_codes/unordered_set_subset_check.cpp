#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на подмножество с использованием unordered_set:

bool isSubset(const vector<int>& set1, const vector<int>& set2) {
    unordered_set <int> set(set1.begin(), set1.end());

    for (int num : set2) {
        if (set.count(num) == 0) {
            return false; // Найден элемент, не принадлежащий подмножеству
        }
    }

    return true; // set2 является подмножеством set1
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> set1 = {1, 2, 3, 4, 5};
    vector<int> set2 = {2, 4, 5};

    if (isSubset(set1, set2)) {
        cout << "set2 является подмножеством set1" << endl;
    } else {
        cout << "set2 не является подмножеством set1" << endl;
    }



   return 0;
}


