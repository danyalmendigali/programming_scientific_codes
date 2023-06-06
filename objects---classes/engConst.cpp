#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance() : feet(0), inches(0.0) { }

    Distance(int ft, float in) : feet(ft), inches(in) { }

    void getdist() // ввод длины пользователем
     {
        cout << "Введите число футов ";
        cin >> feet;
        cout << "Введите число дюймов: ";
        cin >> inches;
     }

    void showdist() // вывод длины
     {
        cout << feet << "\'-" << inches << '\"';
     }

     Distance add_dist(const Distance&) const;
};

Distance Distance::add_dist(const Distance& d2) const
{
     Distance temp;
     temp.inches = inches + d2.inches;
     if(temp.inches >= 12.0) {
        temp.inches -= 12.0;
        temp.feet = 1;
     }

     temp.feet += feet + d2.feet;
     return temp;
}




int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


     Distance dist1, dist3; // две длины
     Distance dist2(11, 6.25); // определение и инициализация dist2

     dist1.getdist(); // ввод dist1 пользователем
     dist3 = dist1.add_dist(dist2); // dist3 = dist1 + dist2


     cout << "dist1 = ";
     dist1.showdist();

     cout << "\ndist2 = ";
     dist2.showdist();

     cout << "\ndist3 = ";
     dist3.showdist();

     cout << endl;









  return 0;
}


