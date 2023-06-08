#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Геттеры и Сеттеры

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

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Point a;
    a.SetY(11); // Будет выводится 22 так как Сеттер умножил наше значение на два
    a.SetX(5);
    a.Print();

    /*
    int result = a.GetX();
    cout << result << endl;
    */


   return 0;
}

