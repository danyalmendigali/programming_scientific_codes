#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
// подсчет факториала числа с помощью рекурсии

unsigned long factfunc(unsigned long);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    unsigned long fact;
    cout << "Введите целое число: ";
    cin >> n;
    fact = factfunc(n);
    cout << "Факториал числа " << n << " равен " << fact << endl;




  return 0;
}

unsigned long factfunc(unsigned long n)
{
    if(n > 1) {
        return n * factfunc(n - 1);
    }
    else {
        return 1;
    }

}
