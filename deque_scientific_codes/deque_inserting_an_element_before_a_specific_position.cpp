#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вставка элемента перед определенной позицией в deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    int position = 2;
    int value = 10;

    deque<int>::iterator it = deque1.begin() + position;
    deque1.insert(it, value); // Вставка элемента перед позицией

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}


