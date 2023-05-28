#include <bits/stdc++.h>
#include <windows.h>

#define ll long long
#define ar array

using namespace std;

void solve() {
    /*

     string str;
    cout << "Введите строку: ";
    getline(cin, str);  // Ввод строки с клавиатуры и сохранение в переменную str

    string s;
    cout << "Введите подстроку: ";
    getline(cin, s);  // Ввод подстроки с клавиатуры и сохранение в переменную s

    size_t found = str.find(s);  // Поиск подстроки s в строке str

    if (found != string::npos) {  // Если подстрока найдена
        cout << "Подстрока \"" << s << "\" найдена в строке \"" << str << "\" начиная с позиции " << found << endl;
    } else {  // Если подстрока не найдена
        cout << "Подстрока \"" << s << "\" не найдена в строке \"" << str << "\"" << endl;
    }
    */


    // Неоптимальное создание строки
    // string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    // Оптимальное создание строки
    int n = 50;
    string str = "Yes";

    string s(n * str.length(), ' ');  // Создаем строку с достаточным размером

    for (int i = 0; i < n; i++) {
        s.replace(i * str.length(), str.length(), str);  // Заменяем каждую подстроку на "yes"
    }



    string substring;
    cin >> substring;

    regex pattern(substring);

    if (regex_search(s, pattern)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
       }








}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cin.tie(0);
    solve();


    return 0;
}
