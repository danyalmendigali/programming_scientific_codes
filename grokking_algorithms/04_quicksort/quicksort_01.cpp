#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

int sum(int arr[], int size_arr)
{
    int total = 0;
    for(int i = 0; i < size_arr; i++)
    {
        total += arr[i];
    }

    return total;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, t);







    return 0;
}


