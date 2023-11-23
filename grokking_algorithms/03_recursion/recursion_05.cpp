#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num = 5;
    int result = sum(num);

    cout << "Сумма первых " << num << " натуральных чисел равна: " << result << "\n";





   return 0;
}

