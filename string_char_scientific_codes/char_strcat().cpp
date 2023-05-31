#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

const int MAX_SIZE = 1000;

int solve() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    cout << "Введите первую строку: ";
    cin.getline(str1, sizeof(str1));

    cout << "Введите вторую строку: ";
    cin.getline(str2, sizeof(str2));

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 + len2 >= MAX_SIZE) {
        cout << "Ошибка: размер строки превышает максимально допустимый размер." << endl;
        return 1;
    }

    strcat(str1, str2); // объединяет строку str2 со строкой str1. Результат сохраняется в str1

    cout << "Результат конкатенации: " << str1 << endl;


}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();








   return 0;
}
