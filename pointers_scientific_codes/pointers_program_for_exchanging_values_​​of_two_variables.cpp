#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа для обмена значениями двух переменных с использованием указателей:

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5, y = 10;
    cout << "Исходные значения: x = " << x << ", y = " << y << endl;

    swap(&a, &b);

    cout << "Обмен значениями: x = " << x << ", y = " << y << endl;






   return 0;
}

