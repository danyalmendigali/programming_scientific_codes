#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Переворот порядка элементов вектора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Переворот порядка элементов вектора
    reverse(numbers.begin(), numbers.end());

    // Вывод элементов вектора после переворота
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;


   return 0;
}
