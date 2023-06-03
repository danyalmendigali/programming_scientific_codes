#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct worker
{
   int num_worker;
   float dollars_worker;
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    worker worker_1;
    worker worker_2;
    worker worker_3;

    cout << "Введите номер первого сотрудника: ";
    cin >> worker_1.num_worker;

    cout << "Введите пособие первого сотрудника: ";
    cin >> worker_1.dollars_worker;



    cout << "Введите номер второго сотрудника: ";
    cin >> worker_2.num_worker;

    cout << "Введите пособие второго сотрудника: ";
    cin >> worker_2.dollars_worker;



    cout << "Введите номер третьего сотрудника: ";
    cin >> worker_3.num_worker;

    cout << "Введите пособие третьего сотрудника: ";
    cin >> worker_3.dollars_worker;


    cout << endl << endl;
    cout << "Номер первого сотрудника " << worker_1.num_worker << endl;
    cout << "Пособие первого сотрудника " << worker_1.dollars_worker << endl;
    cout << endl << endl;

    cout << "Номер второго сотрудника " << worker_2.num_worker << endl;
    cout << "Пособие второго сотрудника " << worker_2.dollars_worker << endl;
    cout << endl << endl;

    cout << "Номер третьего сотрудника " << worker_3.num_worker << endl;
    cout << "Пособие третьего сотрудника " << worker_3.dollars_worker << endl;
    cout << endl << endl;











   return 0;
}



