#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для определения типа переменной с использованием decltype:



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Использование auto и decltype для определения типа переменной average
    auto sum = 0;
    for (auto num : numbers) {
        sum += num;
    }

    decltype(sum) average = static_cast<double>(sum) / numbers.size();

    cout << "Среднее значение: " << average << endl;



   return 0;
}
