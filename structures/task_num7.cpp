#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct Student
{
    string nameStudent;
    float avarage_marks;
    int years_old;

};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Student student1;

    cout << "Введите имя первого студента: ";
    cin >> student1.nameStudent;
    cout << "Введите возраст первого студента: ";
    cin >> student1.years_old;
    cout << "Введите стредню оценку первого студента: ";
    cin >> student1.avarage_marks;

    cout << endl;
    cout << "Имя первого студента: " << student1.nameStudent << endl;
    cout << "Возраст первого студента: " << student1.years_old << endl;
    cout << "Средняя оценка первого студента: " << student1.avarage_marks << endl;



    cout << endl << endl;
    Student student2;

    cout << "Введите имя второго студента: ";
    cin >> student2.nameStudent;
    cout << "Введите возраст второго студента: ";
    cin >> student2.years_old;
    cout << "Введите стредню оценку второго студента: ";
    cin >> student2.avarage_marks;

    cout << endl;
    cout << "Имя второго студента: " << student2.nameStudent << endl;
    cout << "Возраст второго студента: " << student2.years_old << endl;
    cout << "Средняя оценка второго студента: " << student2.avarage_marks << endl;















   return 0;
}






