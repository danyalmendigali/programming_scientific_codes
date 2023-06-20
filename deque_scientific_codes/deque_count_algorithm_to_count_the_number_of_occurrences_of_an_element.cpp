#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма count для подсчета количества вхождений элемента в deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {1, 2, 2, 3, 2, 4, 5};

    int target = 2;

    int count = count(deque1.begin(), deque1.end(), target);

    cout << "Count: " << count << endl;



   return 0;
}
