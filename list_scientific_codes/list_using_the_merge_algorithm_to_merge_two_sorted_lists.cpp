#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма merge для объединения двух отсортированных списков:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> list1 = {1, 3, 5};
    list <int> list2 = {2, 4, 6};


    // Объединение двух отсортированных списков
    list1.merge(list2);


    // Вывод элементов объединенного списка
    for(const auto& element : list1) {
        cout << element << " ";
    }


   return 0;
}




