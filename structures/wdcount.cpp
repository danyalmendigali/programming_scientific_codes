#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

enum itaWord { NO, YES };

int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    itaWord isWord = NO; // isWord равно YES, когда вводится слово, и NO, когда вводятся пробелы

    char ch = 'a';
    int wordcount = 0;
    cout << "Введите предложение: \n";
    do {
        ch = getche(); // ввод символа если введен пробел, а до этого вводилось слово,  значит, слово закончилось
        if(ch == ' ' || ch == '\r')
        {
            if(isWord == YES)
            {
                wordcount++;
                isWord = NO;
            }
        }
        else
         if(isWord == NO) // если начался ввод слова, то устанавливаем флаг
           isWord = YES;
    }   while(ch != '\r'); // выход по нажатию Enter
    cout << "\n---Число слов: " << wordcount << "---\n";












   return 0;
}

