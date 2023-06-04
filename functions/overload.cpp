#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

// Функции можно различать между собой по количеству аргументов и их типам

void repchar();
void repchar(char);
void repchar(char, int);


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    repchar();
    repchar('=');
    repchar('+', 30);



  return 0;
}

//---функция repchar()-----------------------------
// выводит на экран 45 символов '*
void repchar()
{
    for(int i = 0; i < 45; i++) { // цикл, выполняющийся 45 раз
        cout << '*'; // вывод символа '*'
    }
    cout << endl;
}



//--- функция repchar()-----------------------------
// выводит 45 заданных символов
void repchar(char ch)
{
    for(int i = 0; i < 45; i++) {  // цикл, выполняющийся 45 раз
        cout << ch; // вывод заданного символа
    }
    cout << endl;
}



//--------------------------------------------------------
// функция repchar()
// выводит заданный символ заданное число раз
void repchar(char ch, int n)
{
    for(int i = 0; i < n; i++) { // цикл, выполняющийся n раз
        cout << ch; // вывод заданного символа
    }
    cout << endl;
}
