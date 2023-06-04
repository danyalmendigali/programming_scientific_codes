#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// возвращение значения по ссылке

int x; // глобальная переменная
int& setx(); // прототип функции

int main() {
    setx() = 92; // присваивание значения x при помощи вызова функции слева
    cout << "x = " << x << endl; // вывод нового значения x




  return 0;
}

int& setx()
{
    return x; // возвращает значение, которое будет изменено
}
