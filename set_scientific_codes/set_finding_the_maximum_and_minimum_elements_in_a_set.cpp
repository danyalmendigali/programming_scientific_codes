#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск максимального и минимального элементов в set:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    set <int> set = {5, 2, 7, 1, 4};

    int minElement = *set.begin();
    int maxElement = *set.rbegin();

    cout << "Min element: " << minElement << endl;
    cout << "Max element: " << maxElement << endl;



   return 0;
}


