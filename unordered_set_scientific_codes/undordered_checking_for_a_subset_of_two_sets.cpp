
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на подмножество двух множеств с использованием unordered_set:

bool isSubset(const unordered_set<int>& set1, const unordered_set<int>& set2) {
    for (int num : set2) {
        if (set1.find(num) == set1.end()) {
            return false;
        }
    }
    return true;
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_set<int> set1 = {1, 2, 3, 4, 5};
    unordered_set<int> set2 = {3, 4};

    if (isSubset(set1, set2)) {
        cout << "set2 является подмножеством set1" << endl;
    } else {
        cout << "set2 не является подмножеством set1" << endl;
    }



   return 0;
}




