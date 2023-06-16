#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск элемента в списке и получение его позиции:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList;


    // Добавление элементов в список
    myList.push_back(10);
    myList.push_back(30);
    myList.push_back(20);


    int searchElement = 20;
    auto it = find(myList.begin(), myList.end(), searchElement);
    if(it != myList.end()) {
        cout << "Элемент " << searchElement << " найден на позиции " << distance(myList.begin(), it) << endl;
    }
    else {
        cout << "Элемент " << searchElement << " не найден" << endl;
    }



   return 0;
}
