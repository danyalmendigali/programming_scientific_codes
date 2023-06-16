#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма accumulate для суммирования элементов списка:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    list <int> myList = {1, 2, 3, 4, 5};

    int sum = accumulate(myList.begin(), myList.end(), 0);

    cout << "Sum: " << sum << endl;





   return 0;

}

