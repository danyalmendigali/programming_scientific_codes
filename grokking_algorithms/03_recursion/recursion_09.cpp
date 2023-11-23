#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Рекурсивная функция для переворачивания строки задом наперед.
string reverseString(const string& str, int index)
{
    if(index == 0)
    {
        // Базовый случай: если достигли начала строки, возвращаем первый символ.
        return string(1, str[0]);
    }
    else
    {
        // Рекурсивный случай: добавляем текущий символ в конец перевернутой строки,
        // вызываем функцию с предыдущим индексом.

        return str[index] + reverseString(str, index - 1);
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, World!";
    string reversedStr = reverseString(str, str.length() - 1);
    cout << "Перевернутая строка: " << reversedStr << endl;




    return 0;
}

