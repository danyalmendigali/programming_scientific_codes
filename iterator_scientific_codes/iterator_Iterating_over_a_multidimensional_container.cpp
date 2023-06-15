#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Итерация по многомерному контейнеру с использованием итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Итерация по многомерному контейнеру с использованием итераторов
    for (auto it1 = matrix.begin(); it1 != matrix.end(); ++it1) {
        for (auto it2 = it1 -> begin(); it2 != it1 -> end(); ++it2) {
            cout << *it2 << " ";
        }
        cout << endl;
    }



   return 0;
}








