#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с итераторами контейнера vector:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Использование auto для определения типа итераторов iter и endIter
    auto iter = numbers.begin();
    auto endIter = numbers.end();

    cout << "Элементы вектора: ";
    while (iter != endIter) {
        cout << *iter << " ";
        ++iter;
    }
    cout << endl;



   return 0;
}




