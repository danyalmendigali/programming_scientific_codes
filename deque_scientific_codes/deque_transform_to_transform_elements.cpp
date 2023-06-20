#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма transform для преобразования элементов deque:


int square(int x) {
    return x * x;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 3, 4, 5};

    transform(deque1.begin(), deque1.end(), deque1.begin(), square);

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}







