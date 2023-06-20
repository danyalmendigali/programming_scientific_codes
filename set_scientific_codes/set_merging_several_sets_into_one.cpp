#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение нескольких множеств в одно:

set <int> mergeSets(const set <int>& set1, const set <int>& set2) {
    set <int> result = set1;
    result.insert(set2.begin(), set2.end());
    return result;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3};
    set <int> set2 = {3, 4, 5};
    set <int> set3 = {5, 6, 7};

    set <int> mergedSet = mergeSets(set1, set2);
    mergedSet = mergeSets(mergedSet, set3);

    cout << "Объединенный сет: ";
    for (int i : mergedSet) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}

