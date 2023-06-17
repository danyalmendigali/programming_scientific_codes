#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск минимального и максимального элементов в векторе:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {5, 2, 4, 1, 3};

    // Поиск минимального и максимального элементов в векторе
    auto minElement = min_element(numbers.begin(), numbers.end());
    auto maxElement = max_element(numbers.begin(), numbers.end());


    cout << "Минимальный элемент: " << *minElement << endl;
    cout << "Максимальный элемент: " << *maxElement << endl;








   return 0;
}


