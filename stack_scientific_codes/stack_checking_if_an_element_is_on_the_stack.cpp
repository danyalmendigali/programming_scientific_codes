#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка наличия элемента в стеке:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    stack <int> myStack;


    // Добавление элементов в стек
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);



    // Проверка наличия элемента в стеке
    int elementToFind = 20;
    bool found = false;
    stack <int> tempStack;
    while(!myStack.empty()) {
        if(myStack.top() == elementToFind) {
            found = true;
        }

        tempStack.push(myStack.top());
        myStack.pop();
    }



    // Восстановление исходного состояния стека
    while(!tempStack.empty()) {
        myStack.push(tempStack.top());
        tempStack.pop();
    }


    if(found) {
        cout << "Элемент " << elementToFind << " найден в стеке." << endl;
    }
    else {
        cout << "Элемент " << elementToFind << " не найден в стеке." << endl;
    }



   return 0;
}
