#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

const int clubs = 0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace  = 14;

struct card
{
    int number;
    int suit;
};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     // Объявление переменных
    card temp, chosen, prize;
    int position;

     // Инициализация карт
    card card1 = { 7, clubs };
    cout << "Карта 1: 7 треф\n";

    card card2 = { jack, hearts };
    cout << "Карта 2: валет червей\n";

    card card3 = { ace, spades };
    cout << "Карта 3: туз пик\n";

    prize = card3;
    cout << "Меняем местами карту 1 и карту 3...\n";
    swap(card3, card1);

    cout << "Меняем местами карту 2 и карту 3...\n";
    swap(card3, card2);

    cout << "Меняем местами карту 1 и карту 2...\n";
    swap(card2, card1);

    cout << "На какой позиции(1, 2 или 3) теперь туз пик? "; // Запрос позиции туза пик
    cin >> position;

    switch(position)
    {
        case 1: chosen = card1;
        break;

        case 2: chosen = card2;
        break;

        case 3: chosen = card3;
        break;
    }


    if(chosen.number = prize.number && chosen.suit == prize.suit) { // Проверка выбора и определение результата
        cout << "Правильно! Вы выйграли!\n";
    }

    else {
        cout << "Неверно. Вы проиграли.\n";
    }






   return 0;
}
