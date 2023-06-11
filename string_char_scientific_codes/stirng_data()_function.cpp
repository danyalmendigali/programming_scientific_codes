#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// data() в C++ возвращает указатель на внутренний буфер строки. Он предоставляет доступ к символам строки в виде
// нуль-терминированной последовательности символов.
// братите внимание, что data() возвращает указатель на константные символы (const char*), чтобы
// предотвратить изменение содержимого строки через этот указатель. Если вам требуется изменить строку, используйте функцию c_str()

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string str = "Hello, World!";

    const char* ptr = str.data();

    cout << "Строка: " << str << endl;
    cout << "Указатель на буфер: " << ptr << endl;










   return 0;
}







