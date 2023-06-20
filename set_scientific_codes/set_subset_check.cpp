#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на подмножество:

bool isSubset(const set<int>& set1, const set<int>& set2) {
    return includes(set2.begin(), set2.end(), set1.begin(), set1.end());
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3};
    set <int> set2 = {1, 2, 3, 4, 5};

    if (isSubset(set1, set2)) {
        cout << "set1 является подмножеством set2" << endl
    } else {
        cout << "set1 не является подмножеством set2" << endl;
    }



   return 0;
}



