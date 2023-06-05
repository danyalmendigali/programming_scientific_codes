#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

struct Distance
{
    int feet;
    float inches;
};

Distance maxDistance(const Distance& d1, const Distance& d2);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Distance d1, d2;

    cout << "Введите первое значение (футы и дюймы): ";
    cin >> d1.feet >> d1.inches;

    cout << "Введите второе значение (футы и дюймы): ";

    cin >> d2.feet >> d2.inches;

    Distance max = maxDistance(d1, d2);

    cout << "Наибольшее значение: " << max.feet << " футов " << max.inches << " дюймов" << endl;


  return 0;
}




Distance maxDistance(const Distance& d1, const Distance& d2)
{
    if(d1.feet > d2.feet || (d1.feet == d2.feet && d1.inches > d2.inches)) {
        return d1;
    }
    else {
        return d2;
    }
}



