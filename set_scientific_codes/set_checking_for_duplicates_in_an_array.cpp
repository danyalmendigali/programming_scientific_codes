#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия дубликатов в массиве:

bool hasDuplicates(const int* arr, size_t size) {
    set<int> uniqueElements;

    for (size_t i = 0; i < size; ++i) {
        if (uniqueElements.count(arr[i]) > 0) {
            return true;
        }
        uniqueElements.insert(arr[i]);
    }

    return false;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr1[] = {1, 2, 3, 4, 5}; // Нет дубликатов
    int arr2[] = {1, 2, 3, 2, 4, 5};  // Есть дубликаты

    if (hasDuplicates(arr1, 5)) {
        cout << "arr1 имеет дубликаты" << endl;
    } else {
        cout << "arr1 не имеет дубликаты" << endl;
    }

    if (hasDuplicates(arr2, 6)) {
        cout << "arr2 имеет дубликаты" << endl;
    } else {
        cout << "arr2 не имеет дубликаты" << endl;
    }


   return 0;
}

