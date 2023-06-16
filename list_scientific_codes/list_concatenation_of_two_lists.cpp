#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Объединение двух списков:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> list1 = {1, 2, 3};
    list <int> list2 = {4, 5, 6};


    // Объединение двух списков
    list1.splice(list1.end(), list2);


    // Вывод элементов списка 1
    for(const auto& element : list1) {
        cout << element << " ";
    }

   return 0;
}

