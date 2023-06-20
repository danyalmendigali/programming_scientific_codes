#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элемента из set:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set<int> set = {1, 2, 3, 4, 5};

    int element = 3;

    set.erase(element);

    for (int i : set) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}



