#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Резервирование памяти для вектора заранее:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers;

    // Резервирование памяти для вектора заранее
    numbers.reserve(10);

    // Добавление элементов в вектор
    for (int i = 1; i <= 10; ++i) {
        numbers.push_back(i);
    }

    cout << "Размер вектора: " << numbers.size() << endl;




   return 0;
}








