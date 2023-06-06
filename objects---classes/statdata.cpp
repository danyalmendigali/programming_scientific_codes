#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

class foo
{
private:
    static int count;
public:
    foo()
    {
      count++;
    }

    int getcount()
    {
       return count;
    }

};



int foo::count = 0;

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    foo f1, f2, f3;


    cout << "Число объектов: " << f1.getcount() << endl;
    cout << "Число объектов: " << f2.getcount() << endl;
    cout << "Число объектов: " << f3.getcount() << endl;








  return 0;
}

