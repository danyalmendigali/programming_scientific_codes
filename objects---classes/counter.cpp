#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// счетчик в качестве объекта

class Counter
{
private:
    unsigned int count;
public:
    Counter(): count(0) {}

    void inc_count()
    {
        count++;
    }
    int get_count()
    {
        return count;
    }

};


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Counter c1, c2;

    cout << "c1 = " << c1.get_count() << " ";
    cout << "c2 = " << c2.get_count() << endl;

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout << "c1 = " << c1.get_count() << " ";
    cout << "c2 = " << c2.get_count() << endl;






  return 0;
}

