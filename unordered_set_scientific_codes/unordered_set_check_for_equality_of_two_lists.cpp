#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на равенство двух списков с использованием unordered_set:

bool areListsEqual(const vector <int>& list1, const vector<int>& list2) {
    unordered_set<int> set1(list1.begin(), list1.end());
    unordered_set<int> set2(list2.begin(), list2.end());

    return set1 == set2;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> list1 = {1, 2, 3, 4, 5};
    vector<int> list2 = {5, 4, 3, 2, 1};

    if (areListsEqual(list1, list2)) {
        cout << "Списки равны" << endl;
    } else {
        cout << "Списки не равны" << endl;
    }


   return 0;
}


