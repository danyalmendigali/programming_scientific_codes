#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма unique с предикатом для удаления нескольких дубликатов в списке:

bool isEven(int num) {
    return num % 2 == 0;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    // Удаление нескольких дубликатов с использованием предиката
    list <int> myList = {1, 2, 2, 3, 4, 4, 5, 6, 6};


    myList.unique([](int a, int b) { return a == b && isEven(a); });


    // Вывод элементов списка после удаления
    for(const auto& element : myList) {
        cout << element << " ";
    }



   return 0;

}
