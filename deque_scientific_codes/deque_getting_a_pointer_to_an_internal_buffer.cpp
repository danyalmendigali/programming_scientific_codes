#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение указателя на внутренний буфер deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque = {1, 2, 3, 4, 5};

    int* buffer = &deque[0];

    for (int i = 0; i < deque.size(); ++i) {
        cout << buffer[i] << " ";
    }
    cout << endl;

   return 0;
}


