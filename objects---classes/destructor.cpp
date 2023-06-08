#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Деструктор — это специальный метод класса, который автоматически вызывается при уничтожении объекта. Деструкторы предназначены для освобождения
// ресурсов, выделенных объектом, и выполнения других завершающих операций.

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

    Point() // Конструктор по умолчанию
    {
        x = 0;
        y = 0;
    }

    Point(int valueX, int valueY) // (Перегрузка конструктора) Конструктор с параметрами(Должен быть всегда в public)
    {
        x = valueX;
        y = valueY;
    }

    Point(int valueX, bool boolean) // Перегрузка конструктора
    {
        x = valueX;

        if(boolean)
        {
            y = 1;
        } else {
            y = -1;
        }

    }


    int GetY() // Геттер
    {
        return y;
    }

    void SetY(int valueY) // Сеттер
    {
        y = valueY; // Умножил значение на два
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

class MyClass
{
private:
    int* data;
public:
    MyClass(int size) // Конструткор
    {
        data = new int[size];

        FOR(i, 0, size)
        {
            data[i] = i;
        }

        cout << "Объект " << data << " Вызвался конструткор" << endl;
    }

    ~MyClass() // Деструктор (нельзя передава ть параметры), в классе может быть только один деструктор
    {
        delete [] data; // Освобождаем память которая была выделена на массива
        cout << "Объект " << data << " Вызвался деструктор" << endl;
    }

};

void Foo()
{
    cout << "Foo начало выполнения" << endl;
    MyClass a(1);
    cout << "Foo конец выполнения" << endl;
}

int main() {
    // Деструктор работает только тогда когда мы выйдем с области видимости функции main()
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Foo();







   return 0;
}
