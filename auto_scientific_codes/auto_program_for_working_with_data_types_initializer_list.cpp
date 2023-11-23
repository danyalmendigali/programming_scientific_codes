#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <fstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для работы с типами данных initializer_list:


template <typename T>
void printValues(initializer_list<T> values) {
    cout << "Значения: ";
    for (auto value : values) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printValues({1, 2, 3, 4, 5});
    printValues({"Hello", "World", "!"});



   return 0;
}



