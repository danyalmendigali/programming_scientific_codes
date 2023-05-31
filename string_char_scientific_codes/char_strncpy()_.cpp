#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int doMyChar(char* arr, int size) {
     cin.getline(arr, size); // Считываем строку
     char arr2[0];
     strncpy(arr2, arr, 3); // Переносим из певрого во второй вектор 3 байта тоесть первые три элемента

     return strlen(arr2);
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cin >> t;
    char str[t];
    cout << doMyChar(str, t);








   return 0;
}
