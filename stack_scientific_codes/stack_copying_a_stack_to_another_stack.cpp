#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Копирование стека в другой стек:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    stack <int> myStack;
    stack <int> copiedStack;

    // Добавление элементов в стек
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);


    // Копирование стека в другой стек
    copiedStack = myStack;


    // Вывод элементов скопированного стека
    while(!copiedStack.empty()) {
        cout << copiedStack.top() << " ";
        copiedStack.pop();
    }






   return 0;
}

