
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// partition(): Эта функция переставляет элементы в массиве таким образом, чтобы все элементы, удовлетворяющие
// заданному условию, находились перед элементами, не удовлетворяющими условию.


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    int t;
    cout << "Введите число: ";
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << ": ";
        cin >> arr[i];
    }

    int* beginPtr = arr;
    int* endPtr = arr + t;

    auto pivot = partition(beginPtr, endPtr, [](int num) {
    return num % 2 == 0; // Оставляем только четные числа в начале массива
});

    for(int i = 0; i < t; i++)
    {
        cout << "Элемент #" << i << " = " << arr[i] << endl;
    }
    cout << endl << endl;





   return 0;
}



