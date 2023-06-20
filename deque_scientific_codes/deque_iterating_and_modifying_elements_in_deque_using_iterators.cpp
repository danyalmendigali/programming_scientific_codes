#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перебор и изменение элементов в deque с использованием итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    // Перебор и изменение элементов с использованием итераторов
    for (deque <int>::iterator it = deque1.begin(); it != deque1.end(); ++it) {
        *it *= 2;
    }

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}




