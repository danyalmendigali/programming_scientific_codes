#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление всех вхождений определенного элемента из списка:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 3, 2, 4, 2, 5};


    // Удаление всех вхождений элемента со значением 2
    myList.remove(2);


    // Вывод элементов списка после удаления
    for(const auto& element : myList) {
        cout << element << " ";
    }



   return 0;
}

