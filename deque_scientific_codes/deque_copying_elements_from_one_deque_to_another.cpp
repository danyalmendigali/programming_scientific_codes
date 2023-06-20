#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Копирование элементов из одного deque в другой:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque1 = {1, 2, 3, 4, 5};
    deque<int> deque2;

    deque2 = deque1; // Копирование элементов из deque1 в deque2

    for (int i : deque2) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}

