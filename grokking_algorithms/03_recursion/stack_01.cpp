#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

void greet2(string name)
{
    cout << "how are you, " << name << "?" << "\n";
}


void bye()
{
    cout << "ok bye!" << "\n";
}

void greet(string name)
{
    cout << "hello, " << name << "!" << "\n";
    greet2(name);
    cout << "getting ready to say bye..." << "\n";
    bye();
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "What is your name? ";
    string s;
    cin >> s;
    greet(s);



   return 0;
}



