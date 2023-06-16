#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск первого элемента, удовлетворяющего определенному условию, в списке:

bool isEven(int num) {
    return num % 2 == 0;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    list <int> myList = {1, 3, 5, 2, 4, 6};

    auto it = find_if(myList.begin(), myList.end(), isEven);

    if(it != myList.end()) {
        cout << "Первый элемент удовлетворяющему условие: " << *it << endl;
    }
    else {
        cout << "Число не найдено" << endl;
    }





   return 0;

}


