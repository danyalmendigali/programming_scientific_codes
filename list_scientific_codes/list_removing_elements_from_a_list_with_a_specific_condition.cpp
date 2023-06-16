#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Удаление элементов из списка с определенным условием:

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 3, 4, 5, 6};


    // Удаление элементов из списка с определенным условием
    myList.remove_if(isEven);


    // Вывод элементов списка
    for(const auto& element : myList) {
        cout << element << " ";
    }


   return 0;
}
