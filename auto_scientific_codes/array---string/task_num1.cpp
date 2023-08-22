#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

void reversit(char* str)
{
    int length = strlen(str);
    for(int i = 0; i < length / 2; i++)
    {
        swap(str[i], str[length - i - 1]);
    }
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string input;
    getline(cin, input);

    char* str = new char[input.length() + 1];
    strcpy(str, input.c_str());

    reversit(str);

    cout << str << endl;

    delete[] str;




  return 0;
}
