#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление дубликатов из списка:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList;


    // Добавление элементов в список
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(10);
    myList.push_back(30);
    myList.push_back(20);

    // Удаление дубликатов из списка
    myList.sort();
    myList.unique();

    // Вывод элементов списка
    for (const auto& element : myList) {
        cout << element << " ";
    }



   return 0;
}

