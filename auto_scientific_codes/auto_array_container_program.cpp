#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с контейнером array:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    array<int, 5> numbers = {1, 2, 3, 4, 5};

    // Использование auto для определения типа элементов массива
    for (const auto& number : numbers) {
        cout << number << " ";
    }

    cout << endl;


   return 0;
}
