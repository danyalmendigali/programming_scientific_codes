#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка списка в обратном порядке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {5, 2, 1, 4, 3};


    // Сортировка списка в обратном порядке
    myList.sort(greater<int>());


    // Вывод элементов отсортированного списка
    for(const auto& element : myList) {
        cout << element << " ";
    }


   return 0;
}
