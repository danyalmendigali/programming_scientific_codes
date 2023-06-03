#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)


struct Product
{
    string nameProduct;
    int price;
    int number;


};



int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Product myProdect[5];
    int price = 0, number = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Ввдедите названия продукта " << i + 1 << ": ";
        getline(cin, myProdect[i].nameProduct);
        cout << "Введите цену продукта " << i + 1 << ": ";
        cin >> myProdect[i].price;
        price += myProdect[i].price;
        cout << "Введите количество продуктов " << i + 1 << ": ";
        cin >> myProdect[i].number;
        number += myProdect[i].number;
        cin.ignore();
        cout << endl;
     }


     cout << "Общая сумма: " << price << endl;
     cout << "Общее количество покупок: " << number << endl;


     for(int i = 0; i < 5; i++) {
        cout << endl;
        cout << "Название продукта " << i + 1 << ": ";
        cout << myProdect[i].nameProduct << endl;
        cout << "Цена продукта " << i + 1 << ": ";
        cout << myProdect[i].price << endl;
        cout << "Количество продукта " << i + 1 << ": ";
        cout << myProdect[i].number << endl;
        cout << endl;
     }





   return 0;
}
