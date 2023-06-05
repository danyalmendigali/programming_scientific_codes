#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


int globalCount = 0;

void printCallCountGlobal() {
    globalCount++;
    cout << "Количество вызовов функции (глобальная переменная): " << globalCount << endl;
}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    cout << "Использование глобальной переменной:\n";
    for (int i = 0; i < 10; i++) {
       printCallCountGlobal();
    }



  return 0;
}
