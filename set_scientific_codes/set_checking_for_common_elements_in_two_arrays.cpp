#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия общих элементов в двух массивах:

bool hasCommonElements(const int* arr1, size_t size1, const int* arr2, size_t size2) {
    set <int> set1(arr1, arr1 + size1);
    set <int> set2(arr2, arr2 + size2);

    for (int element- : set1) {
        if (set2.count(element) > 0) {
            return true;
        }
    }

    return false;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    if (hasCommonElements(arr1, 5, arr2, 5)) {
        cout << "Массивы имеют общие элементы" << endl;
    } else {
        cout << "Массивы не имеют общие элементы" << endl;
    }



   return 0;
}

