#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// упорядочивает по возрастанию пары чисел

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    void order(int&, int&); // прототип

    int n1 = 99, n2 = 11; // неупорядоченная пара
    int n3 = 22, n4 = 88; // упорядоченная пара
    order(n1, n2); // упорядочивание обеих пар
    order(n3, n4);
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl;
    cout << "n4 = " << n4 << endl;


  return 0;
}

void order(int& num1, int& num2) { // упорядочивает два числа
    if(num1 > num2) { // если первое число больше второго.
        swap(num1, num2); // то меняем их местами

        /* int temp = num1;
        num1 = num2;
        num2 = temp; */
    }

}
