#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Обращение к элементам deque с помощью итераторов:

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    deque<int> deque1 = {1, 2, 3, 4, 5};

    deque <int>::iterator it = deque1.begin();
    ++it; // Переход к следующему элементу

    cout << "Второй элемент: " << *it << endl;




   return 0;
}
