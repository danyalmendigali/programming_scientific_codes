#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Преобразование элементов вектора с использованием функции:

int square(int number) {
    return number * number;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Преобразование элементов вектора с использованием функции
    transform(numbers.begin(), numbers.end(), numbers.begin(), square);

    // Вывод преобразованных элементов вектора
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;




   return 0;
}








