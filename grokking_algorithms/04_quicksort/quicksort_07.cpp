#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

vector <int> quicksort(const vector <int>& MyNotSortedVector)
{
    if(MyNotSortedVector.size() < 2) // Если вектор имеет ноль или одно число то это базовый случай просто выводим вектор без изменений
    {
        return MyNotSortedVector;
    }
    else
    {
        int elementMyNotSortedVector = MyNotSortedVector[0]; // Это опорный элемени может быть любой элемент из вектора
        vector <int> lowElementMyVector, highElementMyVector; // Создаем вектор для чисел которые меньше и больше опрного элемента (elementMyNotSortedVector)
        for(int i = 1; i < MyNotSortedVector.size(); i++) // Проходимся по всему вектору
        {
            if(MyNotSortedVector[i] < elementMyNotSortedVector) // Если число меньше базового элемента
            {
                lowElementMyVector.push_back(MyNotSortedVector[i]); // Добавляем его в вектор для чисел которые меньше опрного
            }
            else // Если число больше базового
            {
               highElementMyVector.push_back(MyNotSortedVector[i]); // Добавляем его в вектор для чисел которые больше опрного
            }
        }

        vector <int> sortedLowMyVector = quicksort(lowElementMyVector); // Рекурсия чтобы отсоритровать вектор для чисел которые меньше опрного элемента
        vector <int> sortedHighMyVector = quicksort(highElementMyVector); // Рекурсия чтобы отсоритровать вектор для чисел которые больше опрного элемента

        vector <int> resultMyNotSortedVector = sortedLowMyVector; // Создаем заключительный вектор и добавляем самое начало(числа меньше базового)
        resultMyNotSortedVector.push_back(elementMyNotSortedVector); // Добавляем сам опорный элемент
        // Добавялем в наш заключительный вектор числа которые больше опорного элемента
        // Параметры фукнции insert(Начинаем с конца заключительного вектора, начинаем добавлять начало вектора для чисел больше опрного, начинаем добавлять
        // конец вектора для чисел больше опрного )
        resultMyNotSortedVector.insert(resultMyNotSortedVector.end(), sortedHighMyVector.begin(), sortedHighMyVector.end());



        return resultMyNotSortedVector;
    }
}

int numberOfDuplicatesInMyVector(const vector <int>& MyNewSortedVector)
{
    int count = 0;
    for(int i = 1; i < MyNewSortedVector.size(); i++)
    {
        if(MyNewSortedVector[i] == MyNewSortedVector[i - 1])
        {
            count++;
        }
    }

    return count;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите размер вектора: ";й
    int sizeMyNotSortedVector;
    cin >> sizeMyNotSortedVector;
    vector <int> myNotSortedVector;
    cout << "Заполните ваш вектор: ";
    for(int i = 0; i < sizeMyNotSortedVector; i++)
    {
        int elementMyNotSortedVector;
        cin >> elementMyNotSortedVector;
        myNotSortedVector.push_back(elementMyNotSortedVector);
    }


    vector <int> MyNewSortedVector = quicksort(myNotSortedVector);
    for(int elementMyVector : MyNewSortedVector)
    {
        cout << elementMyVector << " ";
    }
    cout << "\n";


    cout << numberOfDuplicatesInMyVector(MyNewSortedVector);




   return 0;
}
