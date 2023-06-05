#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

void swap_number(int& a, int& b);
void SortArr(vector<int>& arr);



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

    SortArr(arr);




  return 0;
}



void SortArr(vector<int>& arr)
{

    sort(arr.begin(), arr.end());
    FOR(i, 0, arr.size()) {
       cout << arr[i] << " ";
    }
}







