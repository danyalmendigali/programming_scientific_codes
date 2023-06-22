#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для суммирования элементов двух векторов:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers1 = {1, 2, 3, 4, 5};
    vector<int> numbers2 = {6, 7, 8, 9, 10};

    // Использование auto для определения типа переменной sum
    auto sum = inner_product(numbers1.begin(), numbers1.end(), numbers2.begin(), 0);

    cout << "Сумма элементов: " << sum << endl;


   return 0;
}


