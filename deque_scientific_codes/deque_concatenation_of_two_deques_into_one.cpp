#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Конкатенация двух deque в одну:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3};
    deque <int> deque2 = {4, 5, 6};

    deque1.insert(deque1.end(), deque2.begin(), deque2.end());

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;


   return 0;
}

