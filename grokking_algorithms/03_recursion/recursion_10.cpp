#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Рекурсивная функция для проверки, является ли строка палиндромом.
bool isPalindrome(const string& str, int start, int end1)
{
    if(start >= end1)
    {
        // Базовый случай: если start больше или равен end, значит, мы прошли всю строку.
        // Если мы дошли до этой точки, значит, строка является палиндромом.
        return true;
    }
    else if(str[start] != str[end1])
    {
        // Если текущие символы не равны, строка не является палиндромом.
        return false;
    }
    else
    {
        // Рекурсивный случай: проверяем следующую пару символов.
        return isPalindrome(str, start + 1, end1 - 1);
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "akiika";
    bool result = isPalindrome(str, 0, str.length() - 1);

    if(result)
    {
        cout << "Строка является палиндромом" << endl;
    }
    else
    {
        cout << "Строка не является палиндромом" << endl;
    }






    return 0;
}

