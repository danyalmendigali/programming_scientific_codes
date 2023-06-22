#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// transform: Применяет функцию к каждому элементу диапазона и сохраняет результаты.

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <int> nums = {1, 2, 3, 4, 5};
    vector <double> result(nums.size());

    transform(nums.begin(), nums.end(), result.begin(), [](int num) {
        return sqrt(num);
    });

    // Вывод результатов
    for (double val : result) {
        cout << val << " ";
    }
    cout << endl;



   return 0;
}
