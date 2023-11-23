#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

int sum(int arr[], int index, int size_1)
{
    if(index == size_1)
    {
        return false;
    }
    return arr[index] + sum(arr, index + 1, 4);
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int arr[4] = {1, 2, 3, 4};
    cout << sum(arr, 0, 4);







    return 0;
}



