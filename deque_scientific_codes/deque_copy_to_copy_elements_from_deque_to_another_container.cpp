#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма copy для копирования элементов из deque в другой контейнер

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque = {1, 2, 3, 4, 5};
    vector <int> vector;

    copy(deque.begin(), deque.end(), back_inserter(vector)); // Копирование элементов вектора из deque

    for (int i : vector) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}


