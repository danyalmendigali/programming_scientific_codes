#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct Book
{
    string title;
    string author;
    int year;
};




int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    Book books[5];

    for(int i = 0; i < 5; i++) {
        cout << "Введите название книги " << i + 1 << ": ";
        getline(cin, books[i].title);
        cout << "Введите автора книги " << i + 1 << ": ";
        getline(cin, books[i].author);
        cout << "Введите год издания книги " << i + 1 << ": ";
        cin >> books[i].year;
        cin.ignore();
        cout << endl;
    }


    for(int i = 0; i < 5; i++) {
        cout << endl;
        cout << "Книга " << i + 1 << ": " << endl;
        cout << "Название " << books[i].title << endl;
        cout << "Автор: " << books[i].author << endl;
        cout << "Год издания: " << books[i].year << endl;
        cout << endl;
    }














   return 0;
}




