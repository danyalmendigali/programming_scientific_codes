#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение минимального и максимального элементов в deque:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    deque<int> deque1 = {5, 3, 2, 4, 1};

    int minElement = *min_element(deque1.begin(), deque1.end());
    int maxElement = *max_element(deque1.begin(), deque1.end());

    cout << "Min: " << minElement << endl;
    cout << "Max: " << maxElement << endl;



   return 0;
}






