#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Тернарный оператор является компактной заменой для простых условных выражений if-else, когда требуется выбрать одно из двух значений на основе условия
// условие ? значение_если_истина : значение_если_ложь

int solve(string& s) {
    int a = 0, b = 0;
    FOR(i, 0, s.size()) {
     if(s[i] == '0') {
        a++;
       }
      else if(s[i] == '1') {
        b++;
       }
    }

    return (a > b)?  a : b;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string s;
    cin >> s;
    cout << solve(s);







   return 0;
}
