#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

// Считает гласные буквы в строке

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

int countVowels(string& s);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    getline(cin, s);
    cout << countVowels(s);



  return 0;
}

int countVowels(string& s)
{
    int a = 0;
    FOR(i, 0, s.size()) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
         a++;
    }

    return a;
}
