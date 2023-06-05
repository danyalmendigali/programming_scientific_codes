#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int binarySearch(const vector<int>& arr, int target);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    cout << "Введите количество чисел в массиве: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Заполните массив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Элемент #" << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Введите число которое хотите найти: ";
    cin >> target;

    sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    if (result != -1) {
            result++;
        cout << "Элемент " << target << " найден на позиции " << result << endl;
    } else {
        cout << "Элемент " << target << " не найден" << endl;
    }




  return 0;
}



int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // элемент найден, возвращаем индекс
        } else if (arr[mid] < target) {
            left = mid + 1; // искомый элемент находится в правой части
        } else {
            right = mid - 1; // искомый элемент находится в левой части
        }
    }

    return -1; // элемент не найден
}

