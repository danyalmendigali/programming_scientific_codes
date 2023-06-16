#include <bits/stdc++.h>
#include <windows.h>
#include <algorithm>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Вставка элемента перед первым вхождением определенного значения в список:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    list <int> myList = {1, 2, 3, 4, 5};

    auto it = find(myList.begin(), myList.end(), 3);
    if(it != myList.end()) {
        myList.insert(it, 10);
    }

    for(const auto& element : myList) {
        cout << element << " ";
    }



   return 0;

}
