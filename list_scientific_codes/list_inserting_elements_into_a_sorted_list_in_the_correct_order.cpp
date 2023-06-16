#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вставка элементов в отсортированный список в правильном порядке:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList;

    // Добавление элементов в отсортированный список
    myList.push_back(10);
    myList.push_back(30);


    // Вставка элементов в правильном порядке
    auto it = lower_bound(myList.begin(), myList.end(), 20);
    myList.insert(it, 20);


    // Вывод элементов списка
    for(const auto& element : myList) {
        cout << element << " ";
    }

   return 0;
}


