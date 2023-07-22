#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Элемент №" << i + 1 << ": ";
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int key;
    cout << "Введите число которое хотите найти: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int mid = (low + high ) / 2;
        int array_mid = arr[mid];
        if(array_mid == key)
        {
            cout << "Число найдено на позиции: " << mid;
            return false;
        }
        else if(key > array_mid) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

    }

    cout << "Элемент не найден" << endl;





   return 0;
}
