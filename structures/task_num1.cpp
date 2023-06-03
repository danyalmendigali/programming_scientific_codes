#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct number
{
    int number_city;
    int number_station;
    int number_abonent;
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    number myNumber;
    number myNumber2;

    myNumber.number_city = 212;
    myNumber.number_station = 767;
    myNumber.number_abonent = 8900;

    cout << "Введите пожалуйста номер города: ";
    cin >> myNumber2.number_city;

    cout << "Введите пожалуйста номер станции: ";
    cin >> myNumber2.number_station ;

    cout << "Введите пожалуйста номер абонента: ";
    cin >> myNumber2.number_abonent ;

    cout << endl << endl;

    cout << "Мой номер " << "(" << myNumber.number_city << ") " << myNumber.number_station << "-" << myNumber.number_abonent << endl;
    cout << "Ваш номер " << "(" << myNumber2.number_city << ") " << myNumber2.number_station << "-" << myNumber2.number_abonent << endl;









   return 0;
}


