#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

string palindrome(const string& s);

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    string s;
    cout << "Введите строку: ";
    cin >> s;

    string result = palindrome(s);
    cout << "Результат: " << result << endl;

    return 0;
}

string palindrome(const string& s) {
    int a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[s.size() - i - 1]) {
            a++;
        }
    }

    if (a == s.size()) {
        return "YES";
    }
    else {
        return "NO";
    }
}
