#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void MyFunction(list <int> MyList)
{
    for(list <int>::iterator it = MyList.begin(); it != MyList.end(); it++)
    {
        Sleep(1000);
        cout << *it << " ";
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMyList;
    cout << "Введите размер листа: ";
    cin >> sizeMyList;
    list <int> MyList;
    cout << "Введите содержимое листа: ";
    for(int i = 0; i < sizeMyList; i++)
    {
        int a;
        cin >> a;
        MyList.push_back(a);
    }
    cout << "Содержимое листа: ";
    MyFunction(MyList);








   return 0;
}
