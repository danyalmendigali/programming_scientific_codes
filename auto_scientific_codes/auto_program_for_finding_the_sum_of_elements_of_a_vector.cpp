#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для нахождения суммы элементов вектора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Использование auto для определения типа переменной sum
    auto sum = 0;
    for (auto num : numbers) {
        sum += num;
    }

    cout << "Сумма элементов: " << sum << endl;



   return 0;
}

