#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение ссылки на первый и последний элементы deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque = {1, 2, 3, 4, 5};

    int& first = deque.front(); // Ссылка на первый элемент
    int& last = deque.back(); // Ссылка на последний элемент

    first = 10;
    last = 20;

    for (int i : deque) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}



