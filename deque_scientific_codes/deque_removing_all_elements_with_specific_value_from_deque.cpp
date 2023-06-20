#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление всех элементов с определенным значением из deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque = {1, 2, 3, 2, 4, 2, 5};

    int valueToRemove = 2;
    deque.erase(remove(deque.begin(), deque.end(), valueToRemove), deque.end());

    for (int i : deque) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}





