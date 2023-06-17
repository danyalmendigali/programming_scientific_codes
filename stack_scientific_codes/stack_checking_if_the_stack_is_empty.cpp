#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Проверка, является ли стек пустым:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    stack <int>  myStack;

    // Проверка, является ли стек пустым
    if(myStack.empty()) {
        cout << "Стек пустой" << endl;
    }
    else {
        cout << "Стек не пустой" << endl;
    }



   return 0;
}
