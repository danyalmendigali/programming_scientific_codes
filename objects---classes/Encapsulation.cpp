#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Инкапсуляция ООП пример

class Human
{
public:
    int age;
    int weight;
    string name;

};

class Point
{
private:
    int x;
    int y;

public:
    int GetY() // Геттер
    {
        return y;
    }

    void SetY(int valueY) // Сеттер
    {
        y = valueY * 2; // Умножил значение на два
    }

    int GetX() // Геттер
    {
        return x;
    }

    void SetX(int valueX) // Сеттер
    {
        x = valueX;
    }



    void Print()
    {
        cout << "x = " << x << "\ny = " << y << endl << endl;
    }

};

class CoffeeGrinder
{
private:
    bool CheckVoltage() // Если вольтаж в норме
    {
        return false; // Выводит неправду
    }

public:
    void Start()
    {
        bool voltageIsNormal = CheckVoltage(); // Вольтаж в норме

        if(voltageIsNormal) {  // Если вольтаж в норме выводит 'VjuHHH!'
        cout << "VjuHHH!" << endl;
        }

        else {
            cout << "Beep Beep" << endl; // Иначе 'Beep Beep'
        }
    }


};


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    CoffeeGrinder a;
    a.Start();



   return 0;
}


