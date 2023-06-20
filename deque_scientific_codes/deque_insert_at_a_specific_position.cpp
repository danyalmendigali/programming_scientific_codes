#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вставка элемента в deque на определенную позицию:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    deque <int>::iterator it = deque1.begin() + 2;
    deque1.insert(it, 10); // Вставка элемента со значением 10 на позицию 2

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;




   return 0;
}

