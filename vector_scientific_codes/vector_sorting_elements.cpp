#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка элементов вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {5, 2, 3, 1, 4};


    // Сортировка вектора по возрастанию
    sort(numbers.begin(), numbers.end());


    // Вывод отсортированных элементов вектора
    for(int number : numbers) {
        cout << number << " ";
    }

    cout << endl;



   return 0;
}
