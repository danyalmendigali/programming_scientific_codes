#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итератора для удаления элементов из контейнера с условием:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Удаляем все нечетные числа из контейнера
    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int num) { return num % 2 != 0; }), numbers.end());

    // Выводим элементы после удаления
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}













