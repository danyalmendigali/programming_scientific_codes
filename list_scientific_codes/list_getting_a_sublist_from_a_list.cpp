#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Получение подсписка из списка:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 3, 4, 5};

    // Получение подсписка из списка
    auto startIt = next(myList.begin(), 2); // Итератор на третий элемент
    auto endIt = next(myList.begin(), 4); // Итератор на пятый элемент

    list <int> subList(startIt, endIt);


    for(const auto& element : subList) {
        cout << element << " ";
    }



   return 0;
}

