#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
     cout << "Введите количество чисел в первом векторе: ";
     int l1, l2;
     cin >> l1;
     cout << "Введите количество чисел во втором векторе: ";
     cin >> l2;
     vector <int> numbers1 (l1);
     vector <int> numbers2 (l2);
     cout << "Заполните первый вектор " << l1 << " числами: " << endl;
     for(int i = 0; i < l1; i++) {
        cout << "Введите " << i << " число: ";
        cin >> numbers1[i];
     }
     cout << endl;

     cout << "Заполните второй вектор " << l2 << " числами: " << endl;
     for(int i = 0; i < l2; i++) {
        cout << "Введите " << i << " число: ";
        cin >> numbers2[i];
     }
     cout << endl;

     if(numbers1.empty()) { /// Эта функция определяет пустой ли вектор или нет
        cout << "Ваш первый вектор пуст!" << endl;
     }
     else {
        cout << "Ваш первый вектор имеет числа!" << endl;
     }


     if(numbers2.empty()) { /// Эта функция определяет пустой ли вектор или нет
        cout << "Ваш второй вектор пуст!" << endl;
     }
     else {
        cout << "Ваш второй вектор имеет числа!" << endl;
     }

     cout << "Изменяем первый вектор numbers1.insert(iter1 + 2, 3, 4) " << endl;
     auto iter1 = numbers1.cbegin();
     auto iter2 = numbers2.cend();
     numbers1.insert(iter1 + 2, 3, 4); /// начиная со второй ячейки добавляем три четверки
     numbers2.insert(iter2 - 1, {9999, 9999, 9999, 8888, 8888}); // начиная с предпоследней ячейки добавляем 9999, 9999, 9999, 8888, 8888
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl;

    cout << "Изменяем первый вектор numbers2.insert(iter2 - 1, {9999, 9999, 9999, 8888, 8888})" << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
    }
    cout << endl << endl << endl;


    cout << "Меняем размер первого вектора numbers1.resize(12, 10000) " << endl;
    numbers1.resize(12, 10000); /// именяем размер вектора на 12, если там нет стольки чисел, то заполняем 10000
    numbers2.resize(14, 20000); /// именяем размер вектора на 14, если там нет стольки чисел, то заполняем 20000
    cout << "Размер первого вектора после изменения: " << numbers1.size() << endl;
    cout << "Содержимое первого вектора: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
        cout << "Элемент #" << i << " = " << numbers1[i] << endl;
    }
    cout << endl << endl;

    cout << "Меняем размер второго numbers2.resize(14, 20000) " << endl;
    cout << "Размер второго вектора после изменения: " << numbers2.size() << endl;
    cout << "Содержимое перового вектора: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << "Элемент #" << i << " = " << numbers2[i] << endl;
    }
    cout << endl << endl;


    cout << "Обмениваем значения двух контейнеров" << endl;
    numbers1.swap(numbers2); /// объмениваем значения двух векторов
    cout << "Размер первого вектора после изменения: " << numbers1.size() << endl;
    cout << "Содержимое первого вектора: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
        cout << "Элемент #" << i << " = " << numbers1[i] << endl;
    }
    cout << endl << endl;

    cout << "Размер второго вектора после изменения: " << numbers2.size() << endl;
    cout << "Содержимое второго вектора: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << "Элемент #" << i << " = " << numbers2[i] << endl;
    }
    cout << endl << endl;


    cout << "Выводим первый вектор в обратном порядке: " << endl;
    for(vector <int>::reverse_iterator iter = numbers1.rbegin(); iter != numbers1.rend(); ++iter) /// Реверсивные итераторы позволяют перебирать элементы контейнера в обратном направлении.
    {
        cout << *iter << " ";
    }
    cout << endl << endl;


    cout << "Выводим второй вектор в обратном порядке: " << endl;
    for(vector <int>::reverse_iterator iter4 = numbers2.rbegin();  iter4 != numbers2.rend(); ++iter4) /// Реверсивные итераторы позволяют перебирать элементы контейнера в обратном направлении.
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl;

    cout << "Используем константный реверсивный итератор" << endl;
    cout << endl;
    cout << "Выводим первый вектор используя реверсивный итератор:" << endl;
    for(vector <int>::const_reverse_iterator iter5 = numbers1.crbegin(); iter5 != numbers1.crend(); ++iter5) /// Если надо обеспечить защиту от изменения значений контейнера, то можно использовать константный реверсивный итератор,
    {
        cout << *iter5 << " ";
    }
    cout << endl << endl << endl;

    cout << "Выводим второй вектор используя реверсивный итератор:" << endl; 
    for(vector <int>::const_reverse_iterator iter6 = numbers2.crbegin(); iter6 != numbers2.crend(); ++iter6) /// Если надо обеспечить защиту от изменения значений контейнера, то можно использовать константный реверсивный итератор,
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl << endl;
    auto iter7 = numbers1.begin();
    auto iter8 = numbers1.end();

    auto iter9 = numbers2.begin();
    auto iter10 = numbers2.end();

    numbers1.erase(iter7 + 3, iter8 - 1);
    numbers2.erase(iter9 + 2, iter10 - 2);

    cout << "Размер второго вектора после numbers1.erase(iter6 + 3; iter7 - 1) = " << numbers1.size() << endl;
    cout << "Выводим первый вектор: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
       cout << numbers1[i] << " ";
    }
    cout << endl << endl;

    cout << "Размер второго вектора после numbers2.erase(iter8 + 2, iter9 - 2) = " << numbers2.size() << endl;
    cout << "Выводим второй вектор: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
       cout << numbers2[i] << " ";
    }
    cout << endl << endl;

    if(bool numbers1numbers2 = numbers1 == numbers2) /// Сравнение двух векторов "Если первый вектор равен второму вектору"
    {
        cout << "Ваши два вектора равны!" << endl;
    }
    if(bool numbers1numbers2 = numbers1 != numbers2) /// Сравнение двух векторов "Если первый вектор не равен второму вектору"
    {
        cout << "Ваши два вектора не равны!" << endl;
    }
    cout << endl << endl;




    cout << "Приминяем метод clear() к двум векторам" << endl;
    numbers1.clear(); /// Удаление всех элементов в векторе
    cout << "Размер первого вектора: " << numbers1.size() << endl;

    numbers2.clear(); /// Удаление всех элементов в векторе
    cout << "Размер второго вектора: " << numbers2.size() << endl;
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




    return 0;
}
