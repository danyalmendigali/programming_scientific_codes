#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по списку с использованием итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 3, 4, 5, 6};

    // Итерация по списку с использованием итераторов
    for(auto it = myList.begin(); it != myList.end(); ++it) {
        cout *it << " ";
    }

   return 0;
}
