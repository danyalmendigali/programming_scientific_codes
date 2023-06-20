#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение поддиапазона элементов из deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    // Получение поддиапазона с использованием итераторов
    deque<int>::iterator first = deque1.begin() + 1;
    deque<int>::iterator last = deque1.begin() + 3;
    deque<int> subDeque(first, last);

    for (int i : subDeque) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}

