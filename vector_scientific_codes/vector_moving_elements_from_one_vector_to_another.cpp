#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перемещение элементов из одного вектора в другой:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination;

    // Перемещение элементов из одного вектора в другой
    move(source.begin(), source.end(), back_inserter(destination));

    // Вывод элементов вектора-получателя
    for (int number : destination) {
        cout << number << " ";
    }
    cout << endl;





   return 0;
}
