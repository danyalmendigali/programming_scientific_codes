#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование итераторов для обращения к элементам массива:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    array <int, 5> arr = {1, 2, 3, 4, 5};

    // Обращение к элементам массива с использованием итераторов
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }



   return 0;
}












