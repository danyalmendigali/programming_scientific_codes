#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск наибольшего и наименьшего элементов в контейнере с помощью итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 5, 3, 2, 4};

    // Находим наибольший и наименьший элементы с использованием итераторов
    auto maxIt = max_element(numbers.begin(), numbers.end());
    auto minIt = min_element(numbers.begin(), numbers.end());

    cout << "Наибольший элемент: " << *maxIt << endl;
    cout << "Наименьший элемент: " << *minIt << endl;



   return 0;
}





