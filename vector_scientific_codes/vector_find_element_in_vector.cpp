#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента в векторе:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> numbers = {1, 2, 3, 4, 5};

    // Поиск элемента в векторе
    int searchNumber = 3;
    auto it = find(numbers.begin(), numbers.end(), searchNumber);


    if(it != numbers.end()) {
        cout << "Элемент найден на позиции: " << distance(numbers.begin(), it) << endl;
    }
    else {
        cout << "Элемент не найден" << endl;
    }



   return 0;
}

