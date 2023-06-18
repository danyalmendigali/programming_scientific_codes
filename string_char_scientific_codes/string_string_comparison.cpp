#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Сравнение строк:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str1 = "apple";
    string str2 = "banana";

    int result = str1.compare(str2);   // Сравнение строк

    if (result == 0) {
        cout << "Strings are equal" << endl;
    }

    else if (result < 0)
    {
        cout << "str1 is less than str2" << endl;
    }

    else
    {
        cout << "str1 is greater than str2" << endl;
    }




   return 0;
}

