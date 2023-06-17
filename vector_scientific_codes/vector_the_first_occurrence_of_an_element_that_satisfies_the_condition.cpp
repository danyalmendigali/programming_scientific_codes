#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск первого вхождения элемента вектора, удовлетворяющего условию:

bool isEven(int number) {
    return number % 2 == 0;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector<int> numbers = {1, 2, 3, 4, 5};

    // Поиск первого вхождения элемента вектора, удовлетворяющего условию
    auto it = find_if(numbers.begin(), numbers.end(), isEven);

    if (it != numbers.end()) {
        cout << "Первое четное число: " << *it << endl;
    } else {
        cout << "Четные числа отсутствуют" << endl;
    }




   return 0;
}







