#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n;
    cout << "Введите сколько чисел будет в вашем стеке: ";
    cin >> n;
    stack <int> myStack;
    for(int i = 0; i < n; i++) {
        int a;
        cout << "Введите " << i << " элемент: ";
        cin >> a;
        myStack.push(a);
    }
    cout << endl;

    if(myStack.empty()) {
        cout << "Ваш стек пуст! " << endl;
    }
    else  {
        cout << "Ваше стек имеет числа! " << endl;
    }




}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();



   return 0;
}
