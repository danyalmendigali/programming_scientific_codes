#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Программа заменяет числа в строке c s1 до s2 своими числами. Потом выполняется побайтное копирование строки

void solve() {
    char sentences[200];
    cout << "Введите строку: ";
    cin.getline(sentences, 200); // Чтение предложения с пробелами
    cout << "Введите индекс с которого хотите изменить строку: ";
    int s1, s2;
    cin >> s1;
    cout << "Введите индекс по какой хотите изменить строку: ";
    cin >> s2;

    cin.ignore();
    cout << "Введите " << s2 - s1 + 1 << " элементов" << endl;

    for(int i = s1; i <= s2; i++) {
        char a;
        cout << "Элемент " << i << " = ";
        cin >> a;
        sentences[i] = a;
    }

    for(int i = 0; i < strlen(sentences); i++) {
        if(sentences[i] == ' ') {
            break;
        }

        cout << sentences[i];
    }

    char sentences2[200];
    strcpy(sentences2, sentences); // // копируем строку sentences в sentences2
    cout << endl << endl;
    cout << "Вторая стрка после побайтного копирование strcpy()" << endl;

    for(char i : sentences2) {
        cout << i;
    }
    cout << endl;





}

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    solve();




    return 0;
}
