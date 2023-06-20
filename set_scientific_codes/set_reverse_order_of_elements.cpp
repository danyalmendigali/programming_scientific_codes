#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратный порядок элементов в set:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set = {1, 2, 3, 4, 5};

    cout << "Обычный сет: ";
    for (int i : set) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Обратный сет: ";
    for (auto it = set.rbegin(); it != set.rend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;


   return 0;
}

