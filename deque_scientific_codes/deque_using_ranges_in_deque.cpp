#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование диапазонов в deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    deque <int> deque1 = {1, 2, 3, 4, 5};

    deque <int> subDeque(deque1.begin() + 1, deque1.end() - 1);

    for (int i : subDeque) {
        cout << i << " ";
    }
    cout << endl;




   return 0;
}

