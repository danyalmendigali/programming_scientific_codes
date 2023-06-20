#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух множеств:

set <int> unionSets(const set <int>& set1, const set <int>& set2) {
    set<int> result = set1;
    result.insert(set2.begin(), set2.end());


    return result;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3};
    set <int> set2 = {3, 4, 5};

    set <int> unionSet = unionSets(set1, set2);

    cout << "Объединение: ";
    for (int i : unionSet) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}


