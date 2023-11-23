#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

unordered_map<string, bool> voted;

void checkVoter(const string& name)
{
    if (voted[name]) {
        cout << "Выгнать!" << endl;
    } else {
        voted[name] = true;
        cout << "Пусть голосуют!" << endl;
    }
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    vector <string> vorterList = {"tom", "mike", "alice", "bob"};

    for(const string name : vorterList)
    {
        checkVoter(name);
    }


    return 0;
}

