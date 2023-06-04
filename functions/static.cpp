#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// демонстрирует статические локальные переменные

float getavg(float); // прототип функции

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float data = 1, avg;
    while(data != 0)
    {
        cout << "Введите число: ";
        cin >> data;
        avg = getavg(data);
        cout << "Среднее значение: " << avg << endl;
    }



  return 0;
}

//--------------------------------------------------------
// функция getavg()
// находит среднее арифметическое всех введенных значений
float getavg(float newdata)
{
    static float total = 0; // инициализация статических
    static int count = 0; // переменных при первом вызове
    count++; // увеличение счетчика
    total += newdata; // добавление нового значения к сумме
    return total / count; // возврат нового среднего значения
}






