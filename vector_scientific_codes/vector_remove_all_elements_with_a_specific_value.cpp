#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление всех элементов с определенным значением из вектора:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 2, 4, 2, 5};


    // Удаление всех элементов определенным значением из вектора
    int valueToRemove = 2;
    numbers.erase(remove(numbers.begin(), numbers.end(), valueToRemove), numbers.end());


    // Вывод элементов вектора после удаления
    for(int number : numbers) {
        cout << number << " ";
    }
    cout << endl;





   return 0;
}

