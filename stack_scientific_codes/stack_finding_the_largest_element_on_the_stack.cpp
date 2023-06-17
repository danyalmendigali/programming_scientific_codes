#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск наибольшего элемента в стеке:

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
    myStack.push(20);
    myStack.push(50);

    // Поиск наибольшего элемента в стеке
    int maxElement = myStack.top();
    while(!myStack.empty()) {
        if(myStack.top() > maxElement) {
            maxElement = myStack.top();
        }
        myStack.pop();
    }



    cout << "Наибольший элемент в стеке: " << maxElement << endl;



   return 0;
}


