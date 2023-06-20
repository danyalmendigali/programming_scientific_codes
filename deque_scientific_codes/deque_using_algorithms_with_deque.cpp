#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритмов с deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    deque <int> deque1 = {1, 2, 3, 4, 5};

    // Использование алгоритма find
    deque <int>::iterator it = find(deque1.begin(), deque1.end(), 3);
    if (it != deque1.end()) {
        cout << "Элемент найден в позиции: " << distance(deque1.begin(), it) << endl;
    }




   return 0;
}
