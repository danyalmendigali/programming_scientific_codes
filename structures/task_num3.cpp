#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char input;
    cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> input;

    etype position;
    switch (input) {
        case 'l':
            position = laborer;
            cout << "Полное название должности: laborer\n";
            break;
        case 's':
            position = secretary;
            cout << "Полное название должности: secretary\n";
            break;
        case 'm':
            position = manager;
            cout << "Полное название должности: manager\n";
            break;
        case 'a':
            position = accountant;
            cout << "Полное название должности: accountant\n";
            break;
        case 'e':
            position = executive;
            cout << "Полное название должности: executive\n";
            break;
        case 'r':
            position = researcher;
            cout << "Полное название должности: researcher\n";
            break;
        default:
            cout << "Некорректный ввод\n";
            return 0;
    }













   return 0;
}




