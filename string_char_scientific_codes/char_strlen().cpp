#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b)  for(int i = a; i < b; i++)

// strlen - функция которая определяет длинну строки

void solve() {
    /*
    int t;
    cin >> t;
    char myString[t];
    FOR(i, 0, t) {
      cin >> myString[i]; // Вводим содержимое массива из символов char
    }
    int length = strlen(myString); // Присваиваем пременной length значение длинну строки

    cout << length;
    */
///////////////////////////////////////////////////////////////////////////////////////

// 1 Задача: Найти длину наибольшего слова в заданном предложении.
      /*
    char sentences[100];
    cout << "Введите предложение: ";
    cin.getline(sentences, 100); // Чтение предложения с пробелами

    char* token = strtok(sentences, " "); // Разделение предложения на слова по пробелам
    int maxLength = 0;

    while(token != NULL) { // Цикл будет выполняться до тех пор, пока указатель token не станет равным NULL
        int length = strlen(token); // Вычисление длины текущего слова

        if(length > maxLength) {
            maxLength = length;
        }

        token = strtok(NULL, " "); // Переход к следующему слову
       }


    cout << "Длина наибольшего слова: " << maxLength  << endl;
    */

///////////////////////////////////////////////////////////////////////////////////////

// 2 Задача: Проверка, является ли строка палиндромом.
}

bool isPalindrome(const char* str) {
   int length = strlen(str);

   for(int i = 0, j = length - 1; i < j; i++, j--) {
      if(str[i] != str[j]) {
        return false;
      }
   }


   return true;


}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    solve();

    char sentences[100];
    cout << "Введите предложение: ";
    cin.getline(sentences, 100); // Чтение предложения с пробелами
    if(isPalindrome(sentences)) {
        cout << "Строка является палиндромом" << endl;
    }
    else {
        cout << "Строка не является палиндромом" << endl;
    }



   return 0;
}
