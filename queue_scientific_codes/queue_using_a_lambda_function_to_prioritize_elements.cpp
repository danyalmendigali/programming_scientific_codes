#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Использование лямбда-функции для определения приоритета элементов в очереди:


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    priority_queue <int, vector<int>, function<bool(int, int)>> myQueue(
        [](int a, int b) {
            // Приоритет: нечетные числа больше четных
            if (a % 2 == 0 && b % 2 != 0) {
                return false;  // a имеет меньший приоритет
            } else if (a % 2 != 0 && b % 2 == 0) {
                return true;  // a имеет больший приоритет
            } else {
                return a < b;  // a и b имеют одинаковый приоритет
            }
        }
    );

    myQueue.push(5);
    myQueue.push(10);
    myQueue.push(3);
    myQueue.push(8);


    while(!myQueue.empty()) {
        cout << myQueue.top() << " ";
        myQueue.pop();
    }


   return 0;
}


