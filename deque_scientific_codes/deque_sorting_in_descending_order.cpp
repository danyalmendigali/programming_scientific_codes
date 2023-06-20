#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка deque в порядке убывания:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque <int> deque1 = {5, 3, 2, 4, 1};

    sort(deque1.begin(), deque1.end(), greater<int>());

    for (int i : deque1) {
        cout << i << " ";
    }
    cout << endl;



   return 0;
}





