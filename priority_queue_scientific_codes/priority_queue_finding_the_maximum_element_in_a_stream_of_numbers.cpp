#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <sstream>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск максимального элемента в потоке чисел с использованием priority_queue:

int findMaxInStream() {
    priority_queue<int> pq;

    int num;
    while (cin >> num) {
        pq.push(num);
    }

    return pq.top();
}



int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    cout << "Введите цифры (Ctrl+Z, чтобы остановить):" << endl;

    int max = findMaxInStream();

    cout << "Максимальное количество: " << max << endl;;



    return 0;

}
