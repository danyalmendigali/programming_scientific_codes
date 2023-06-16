#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сортировка списка в порядке возрастания:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList;


    // Добавление элементов в список
    myList.push_back(30);
    myList.push_back(10);
    myList.push_back(20);

    // Сортировка списка в порядке возрастания
    myList.sort();


    // Вывод элементов списка
    for(const auto& element : myList) {
        cout << element << " ";
    }



   return 0;
}
