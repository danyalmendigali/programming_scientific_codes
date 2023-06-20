#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление первого элемента из deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque = {1, 2, 3, 4, 5};

    deque.pop_front(); // Удаление первого элемента

    for (int i : deque) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}


