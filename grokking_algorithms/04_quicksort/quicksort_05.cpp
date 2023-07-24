#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

vector <int> quicksort(const vector <int>& MyVector)
{
    if(MyVector.size() < 2)
    {
        return MyVector;
    }
    else
    {
        int pivot = MyVector[0];
        vector <int> greater, less;

        for(int i = 1; i < MyVector.size(); i++)
        {
            if(MyVector[i] <= pivot)
            {
                less.push_back(MyVector[i]);
            }
            else {
                greater.push_back(MyVector[i]);
            }
        }
        vector <int> sortedLess = quicksort(less);
        vector <int> sortedGreater = quicksort(greater);

        vector <int> result = sortedLess;
        result.push_back(pivot);
        result.insert(result.end(), sortedGreater.begin(), sortedGreater.end());

        return result;


    }
}




int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_vector;
    cout << "Введите размер вектора: ";
    cin >> size_vector;
    vector <int> MyVector;

    for(int i = 0; i < size_vector; i++)
    {
        int a;
        cin >> a;
        MyVector.push_back(a);
    }

    vector <int> sortedMyVector = quicksort(MyVector);

    cout << "Отсортированный вектор: ";
    for(int element : sortedMyVector)
    {
        cout << element << " ";
    }





   return 0;
}
