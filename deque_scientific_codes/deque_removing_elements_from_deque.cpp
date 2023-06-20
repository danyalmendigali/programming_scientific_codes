#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элементов из deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    deque<int> deque = {1, 2, 3, 4, 5};

    deque.pop_back(); // Удаление элемента с конца
    deque.pop_front(); // Удаление элемента с начала

    for (int i : deque) {
        cout << i << " ";
    }
    cout << endl;





   return 0;
}

