#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    /*
    stack <int> steck;

    int i = 0;
    cout << "Введите шесть любых чисел: " << endl; // предлагаем пользователю ввести 6 чисел
    while(i != 6) {
        int a;
        cin >> a;
        steck.push(a); // добавляем введенные числа

        i++;
    }

    if(steck.empty()) cout << "Стек не пуст! " << endl; // проверяем пуст ли стек (нет)

    cout << "Вверхний элемент стека: " << steck.top() << endl; // выводим верхний элемент
    cout << "Давайте удалим верхний элемент " << endl;

    steck.pop(); // удаляем верхний элемент

    cout << "А это новый верхний элемент: " << steck.top() << endl; // выводим уже новый верхний элемент
    */

    stack <int> st;
    st.push(2);
    st.push(43);
    st.push(3);
    st.emplace(9);


    while(!st.empty()) { // Пока стек не пуст выводим элементы
        cout << st.top() << endl; // Cмотрим элемент
        st.pop(); // Извлекаем элемент
    }





    /*
    cout << st.top() << endl; // Выводим последний элемент тоесть 9

    st.pop();

    cout << st.top() << endl; // Выводим последний элемент до 9 тоесть 3
    */




}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    solve();



   return 0;
}
