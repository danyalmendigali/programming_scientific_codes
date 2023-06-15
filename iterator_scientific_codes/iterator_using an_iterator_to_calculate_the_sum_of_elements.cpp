#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для вычисления суммы элементов в контейнере:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Вычисляем сумму элементов с использованием итераторов
    int sum = accumulate(numbers.begin(), numbers.end(), 0);

    cout << "Сумма элементов: " << sum << endl;



   return 0;
}





