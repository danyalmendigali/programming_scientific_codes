#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

string reverseString(string& s);



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string s;
    cin >> s;
    cout << endl;
    reverseString(s);




  return 0;
}

string reverseString(string& s)
{
    for(int i = s.size() - 1; i >= 0; i--) {
        cout << s[i];
    }
}
