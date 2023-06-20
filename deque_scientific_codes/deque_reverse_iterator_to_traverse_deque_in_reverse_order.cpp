#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратный итератор для обхода deque в обратном порядке:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    for (deque <int>::reverse_iterator rit = deque1.rbegin(); rit != deque1.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;




   return 0;
}



