#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {5, 3, 1, 4, 2};

    sort(deque1.begin(), deque1.end()); // Сортировка элементов

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}
