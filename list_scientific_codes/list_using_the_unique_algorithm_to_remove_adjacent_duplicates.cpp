#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма unique для удаления смежных дубликатов в списке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4};


    // Удаление смежных дубликатов в списке
    myList.unique();


    // Вывод элементов списка
    for(const auto& element : myList) {
        cout << element << " ";
    }



   return 0;
}


