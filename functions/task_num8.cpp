#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)



void swap(int& a, int& b);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;
    cout << "Введите значение a: ";
    cin >> a;

    cout << "Введите значение b: ";
    cin >> b;


    cout << "До обмена: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "После обмена: a = " << a << ", b = " << b << endl;



  return 0;
}

void swap(int& a, int& b) {

    int temp = a;
    a = b;
    b = temp;
}
