#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обратный вывод элементов списка с использованием рекурсии:

void reversePrint(const list <int>& myList, list <int>::const_reverse_iterator it) {
    if(it == myList.rend()) {
        return;
    }

    cout << *it << " ";
    reversePrint(myList, ++it);

}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    list <int> myList = {1, 2, 3, 4, 5};

    // Обратный вывод элементов списка с использованием рекурсии
    reversePrint(myList, myList.rbegin());




   return 0;
}



