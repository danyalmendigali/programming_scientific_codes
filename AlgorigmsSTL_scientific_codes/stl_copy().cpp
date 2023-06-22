#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// copy: Копирует элементы из одного диапазона в другой.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> source = {1, 2, 3, 4, 5};
    vector <int> destination(5);

    copy(source.begin(), source.end(), destination.begin());

    // Вывод элементов скопированного вектора
    for (int num : destination) {
        cout << num << " ";
    }
    cout << endl;



   return 0;
}
