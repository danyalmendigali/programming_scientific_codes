#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class employee
{
private:
    string name;
    long int number;
public:
    void getdate()
    {
        cout << "Введите имя: ";
        cin >> name;
        cout << "Введите номер: ";
        cin >> number;
    }

    void putdata()
    {
        cout << "Имя: " << name << "\nНомер: "<< number << "\n";
    }



};

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int t;
    cout << "Сколько служащих будет: ";
    cin >> t;
    cout << "\n";
    for(int i = 0; i < t; i++) {
        employee a1;
        cout << "\n" << "\n";
        a1.getdate();
        cout << "\n";
        a1.putdata();
    }




  return 0;
}

