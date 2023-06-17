#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Добавление элементов в стек и их извлечение:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    stack <int>  myStack;


    // Добавление элементов в стек
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);


    // Извлечение и вывод элементов стека
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }




   return 0;
}
