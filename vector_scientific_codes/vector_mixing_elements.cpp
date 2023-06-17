#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Перемешивание элементов вектора:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Перемешивание элементов вектора
    random_device rd;
    mt19937 g(rd());
    shuffle(numbers.begin(), numbers.end(), g);

    // Вывод перемешанных элементов вектора
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;





   return 0;
}





