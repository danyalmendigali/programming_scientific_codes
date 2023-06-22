#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для проверки, содержит ли вектор заданное значение:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;

    // Использование auto для определения типа результата поиска
    auto it = find(numbers.begin(), numbers.end(), target);

    if (it != numbers.end()) {
        cout << "Значение " << target << " найдено!" << endl;
    } else {
        cout << "Значение " << target << " не найдено." << endl;
    }


   return 0;
}

