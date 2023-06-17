#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование алгоритма transform для преобразования элементов в стеке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    stack <int> myStack;


    // Добавление элементов в стек
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Создание вектора для хранения преобразованных элементов
    vector <int> transformedElements;


    // Преобразование элементов стека и сохранение их в векторе
    transform(myStack.begin(), myStack.end(), back_inserter(transformedElements), [](int element) {
        return element * 2;
    });

    // Вывод преобразованных элементов
    for(const auto& element : transformedElements) {
        cout << element << " ";
    }
    cout << endl;




   return 0;
}

