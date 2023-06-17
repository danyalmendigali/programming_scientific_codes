#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратное копирование элементов вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Создание нового вектора и обратное копирование элементов
    vector <int> reversedNumbers(numbers.rbegin(), numbers.rend());

    // Вывод элементов в обратном порядке
    for(int number : reversedNumbers) {
        cout << number << " ";
    }
    cout << endl;

   return 0;
}

