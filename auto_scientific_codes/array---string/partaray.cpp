#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// массив из структур

const int SIZE = 4;

struct part
{
     int modelnumber;
     int partnumber;
     float cost;
};

int main() {
    int n;
    part apart[SIZE];

    for(n = 0; n < SIZE; n++)
    {
        cout << endl;
        cout << "Введите номер модели: ";
        cin >> apart[n].modelnumber;

        cout << "Введите номер части: ";
        cin >> apart[n].partnumber;

        cout << "Введите стоимость: ";
        cin >> apart[n].cost;
    }

    cout << endl;
    for(int i = 0; i < SIZE; i++) {
        cout << "Модель " << apart[i].modelnumber;
        cout << " Часть " << apart[i].partnumber;
        cout << " Стоимость " << apart[i].cost << endl;
    }

    return 0;
}


