#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перевод set в vector:

vector <int> setToVector(const set<int>& set) {
    return vector<int>(set.begin(), set.end());
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set = {1, 2, 3, 4, 5};

    vector <int> vector = setToVector(set);

    cout << "Вектор: ";
    for (int i : vector) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}


