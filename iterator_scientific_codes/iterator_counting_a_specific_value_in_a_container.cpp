#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для подсчета определенного значения в контейнере:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 2, 4, 2, 5};

    // Подсчитываем количество чисел 2 в контейнере с использованием итераторов
    int count1 = count(numbers.begin(), numbers.end(), 2);

    cout << "Число 2 встречается " << count1 << " раз(а)." << endl;



   return 0;
}

