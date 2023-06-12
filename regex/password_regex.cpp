#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// Проверка валидности пароля с использованием определенных правил

int main()
{
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string password = "Abc123!";
    regex regex(R"(^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[!@#$%^&*()]).{8,}$)");

    if(regex_match(password, regex)) {
        cout << "Пароль валиден" << endl;
    }
    else {
        cout << "Пароль невалиден" << endl;
    }



    return 0;
}






