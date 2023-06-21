#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск пересечения двух множеств с использованием unordered_set:

unordered_set<int> findIntersection(const unordered_set<int>& set1, const unordered_set<int>& set2) {
    unordered_set<int> intersectionSet;
    for (int num : set1) {
        if (set2.count(num) > 0) {
            intersectionSet.insert(num);
        }
    }
    return intersectionSet;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unordered_set <int> set1 = {1, 2, 3, 4, 5};
    unordered_set <int> set2 = {4, 5, 6, 7};

    unordered_set <int> intersection = findIntersection(set1, set2);

    cout << "Пересечение : ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}
