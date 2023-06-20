#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка на равенство двух множеств:

bool areSetsEqual(const set<int>& set1, const set<int>& set2) {
    return set1 == set2;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set1 = {1, 2, 3};
    set <int> set2 = {2, 3, 4};

    if (areSetsEqual(set1, set2)) {
        cout << "Сеты равны" << endl;
    } else {
        cout << "Сеты не равны" << endl;
    }



   return 0;
}



