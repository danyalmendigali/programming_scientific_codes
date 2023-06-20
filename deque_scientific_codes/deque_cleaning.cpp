#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Очистка deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    deque1.clear();

    if (deque1.empty()) {
        cout << "Deque пустой" << endl;
    }

    else
    {
        cout << "Deque не пустой" << endl;
    }



   return 0;
}
