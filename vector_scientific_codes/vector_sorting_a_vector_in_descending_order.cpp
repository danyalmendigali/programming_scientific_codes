#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка вектора в убывающем порядке:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {5, 2, 4, 1, 3};

    // Сортировка вектора в убывающем порядке
    sort(numbers.begin(), numbers.end(), greater<int>());


    // Вывод элементов вектора после сортировки
    for(int number : numbers) {
        cout << number << " ";
    }

    cout << endl;



   return 0;
}

