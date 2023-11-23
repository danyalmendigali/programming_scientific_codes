#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void goalaction(int i)
{
    if(i == 0)
    {
        cout << "Like" << "\n";
    }
    else
    {
        cout << i << endl;
        goalaction(i - 1);
    }


}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    goalaction(5);





   return 0;
}

