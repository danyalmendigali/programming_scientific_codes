#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// merge() в C++ - это стандартная функция библиотеки STL, которая служит для слияния двух отсортированных диапазонов элементов в один отсортированный диапазон.

void solve() {

    list <int> myList1, myList2;
    int n1, n2;
    cout << "Введите количество чисел в первом листе: ";
    cin >> n1;
    cout << "Введите количество чисел во втором листе: ";
    cin >> n2;
    cout << endl;

    cout << "Заполните пожалуйста первый лист" << endl;
    for(int i = 0; i < n1; i++) {
        cout << "Введите элемент #" << i << " : ";
        int a;
        cin >> a;
        myList1.push_back(a);
    }

    cout << endl;
    cout << "Заполните пожулайста второй лист" << endl;
    for(int i = 0; i < n2; i++) {
        cout << "Введите элемент #" << i << " : ";
        int b;
        cin >> b;
        myList2.push_back(b);
    }
    cout << endl;

    if(myList1.empty()) {
        cout << "Ваш первый лист пуст!" << endl;
    }
    else cout << "Ваш первый лист не пуст!" << endl;

    if(myList2.empty()) {
        cout << "Ваш второй лист пуст!" << endl;
    }
    else cout << "Ваш второй лист не пуст!" << endl;

    cout << endl;
    cout << "Создаем реверсивный итератор первому листу(выводи лист в обратном порядке)" << endl;
    for (list<int>::reverse_iterator iter = myList1.rbegin(); iter != myList1.rend(); ++iter) { /// Выводим лист в обратном порядке использую реверсивный итератор
        cout << *iter << " ";
    }
    cout << endl << endl;


    cout << "Создаем реверсивный итератор второму листу(выводи лист в обратном порядке)" << endl;
    for (list<int>::reverse_iterator iter2 = myList2.rbegin(); iter2 != myList2.rend(); ++iter2) { /// Выводим лист в обратном порядке использую реверсивный итератор
        cout << *iter2 << " ";
    }
    cout << endl;



    cout << "Добавляем числа с помощью insert() первому листу" << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "Введите второе число: ";
    cin >> g2;
    cout << "Введите третье число: ";
    cin >> g3;

    auto iter3 = myList1.begin();
    advance(iter3, g1);
    myList1.insert(iter3, g2, g3); /// добавляем элементы g2 штук, g3 какое число и iter3 начиная с какого элемента

    cout << endl;
    cout << "Вывод содержимого первого листа после добавление чисел (insert): ";
    for(list <int>::iterator iter4 = myList1.begin(); iter4 != myList1.end(); ++iter4)
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl << endl;





    cout << "Добавляем числа  с помощью insert() втором листу" << endl;
    cout << "Введите 1) c какого числа начать вставку чисел 2) Cколько чисел 3) Какая это цифра" << endl;
    cout << "Введите первое число: ";
    int g4, g5, g6;
    cin >> g4;
    cout << "Введите второе число: ";
    cin >> g5;
    cout << "Введите третье число: ";
    cin >> g6;

    auto iter5 = myList2.begin();
    advance(iter5, g4);
    myList2.insert(iter5, g5, g6); /// добавляем элементы g2 штук, g3 какое число и iter3 начиная с какого элемента

    cout << endl;
    cout << "Вывод содержимого первого листа после добавление чисел (insert): ";
    for(list <int>::iterator iter6 = myList2.begin(); iter6 != myList2.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl << endl;


    cout << "Теперь мы сортируем эти два листа" << endl;
    cout << "Начинаем с первого: ";
    myList1.sort(); /// Сортируем первый лист
    for(int res : myList1){
        cout << res << " "; /// Выводим результат
    }
    cout << endl;
    cout << "Теперь второй: ";
    myList2.sort(); /// Сортируем первый лист
    for(int res2 : myList2){
        cout << res2 << " "; /// Выводим результат
    }

    myList1.merge(myList2); /// Слияния двух отсортированных диапазонов элементов в один отсортированный диапазон
    cout << endl;

    cout << "Лист после функции merge(): ";
    for(int res3 : myList1) {
        cout << res3 <<  " "; /// Выводим результат
    }
}



int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    /*
    int t;
    cin >> t;
    while(t--)
    */
       solve();






    /*
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8};
    vector<int> v3(v1.size() + v2.size());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    for (int i : v3) {
        std::cout << i << " ";
    }
    cout << std::endl;
    */


   return 0;
}

