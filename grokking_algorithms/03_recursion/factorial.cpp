#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int fact(int x)
{
    if(x == 1)
    {
        return x;
    }
    else
    {
        return x * fact(x - 1);
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int factorial;
    cin >> factorial;

    cout << fact(factorial);




   return 0;
}
