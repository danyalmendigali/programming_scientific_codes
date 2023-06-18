#include <bits/stdc++.h>
#include <windows.h>
#include <functional>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Переворот строки с использованием указателей:

void reverseString(char* str) {
    int length = std::strlen(str);
    char* start = str;
    char* end = str + length - 1;

    while (start < end) {
        // Обмениваем символы местами
        char temp = *start;
        *start = *end;
        *end = temp;

        // Перемещаем указатели
        ++start;
        --end;
    }
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char str[] = "Hello, World!";
    reverseString(str);
    cout << str << endl; // Выводит "!dlroW ,olleH"


   return 0;
}





