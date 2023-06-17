#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Очистка вектора и освобождение памяти:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};


    // Очистка вектора и освобождение памяти
    numbers.clear();
    vector<int>().swap(numbers);

    cout << "Размер вектора после очистки: " << numbers.size() << endl;




   return 0;
}


