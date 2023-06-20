#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение пересечения двух множеств:

set<int> getIntersection(const set<int>& set1, const set<int>& set2) {
    set <int> intersection;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersection, intersection.begin()));
    return intersection;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3, 4, 5};
    set <int> set2 = {4, 5, 6, 7, 8};

    set <int> intersection = getIntersection(set1, set2);

    cout << "Пересечение: ";
    for (int i : intersection) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}


