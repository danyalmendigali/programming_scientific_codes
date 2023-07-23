#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
#include <vector>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


int countdown(int  i)
{
    cout << i << " ";
    if(i <= -100) {
        return false;
    }
    else{
       countdown(i - 1);
    }

}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i = 5;
    cout << countdown(i);


   return 0;
}


