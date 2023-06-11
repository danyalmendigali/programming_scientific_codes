#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// compare(): Сравнивает две строки и возвращает результат сравнения.

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str1 = "Hello";
    string str2 = "Hello";
    int result = str1.compare(str2);
    if (result < 0) {
      cout << "Строка str1 меньше строки str2" << endl;
    }
    else if (result > 0) {
      cout << "Строка str1 больше строки str2" << std::endl;

    }
    else
    {
       cout << "Строка str1 равна строке str2" << std::endl;
    }

// Отрицательное число, если str1 < str2;
// Положительное число, если str1 > str2;
// 0, если str1 == str2;









   return 0;
}






