#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class Car
{
private:
    string model;
    int year;
    int kilometres;
public:
    void SetClass()
    {
        cout << "Введите модель машины: ";
        getline(cin, model);

        cout << "Введите год выпуска машины: ";
        cin >> year;

        cout << "Введите пробег(КМ): ";
        cin >> kilometres;
    }


    void printClass()
    {
        cout << "\nМодель машины: " << model;
        cout << "\nГод выпуска машины: " << year;
        cout << "\nПробег(КМ): " << kilometres;

    }


    void copyCar(Car *car2)
    {
        model = car2 -> model;
        year = car2 -> year;
        kilometres = car2 -> kilometres;
    }
};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Car car1;
    car1.SetClass();
    car1.printClass();
    cout << "\n";

    Car car2;
    car2.copyCar(&car1);
    car2.printClass();







  return 0;
}


