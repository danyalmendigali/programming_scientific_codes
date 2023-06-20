#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Изменение значений элементов в deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque1 = {1, 2, 3, 4, 5};

    deque1[2] = 10; // Изменение значения элемента на позиции 2

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}

