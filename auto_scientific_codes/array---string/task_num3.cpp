#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class fraction {
public:
    double average = 0.0;

    void MyMethod(double x) {
        average += x;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    fraction a;
    cout << "Введите количество чисел в массиве: ";
    int n;
    cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        a.MyMethod(arr[i]);
    }
    delete[] arr;

    cout << a.average / 3;

    return 0;
}
