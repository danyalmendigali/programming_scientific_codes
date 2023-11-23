#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

vector <int> quicksort(const vector <int> MyNotSortedVector)
{
    if(MyNotSortedVector.size() < 2)
    {
        return MyNotSortedVector;
    }
    else
    {
        int elementInMyNotSortedVector = MyNotSortedVector[0];
        vector <int> elementLowInMyNotSortedVector, elementHighInMySortedVector;
        for(int i = 1; i < MyNotSortedVector.size(); i++) {
        if(MyNotSortedVector[i] < elementInMyNotSortedVector)
        {
            elementLowInMyNotSortedVector.push_back(MyNotSortedVector[i]);
        }
        else
        {
            elementHighInMySortedVector.push_back(MyNotSortedVector[i]);
        }
      }

        vector <int> MySortedLowVector = quicksort(elementLowInMyNotSortedVector);
        vector <int> MySortedHighVector = quicksort(elementHighInMySortedVector);

        vector <int> MyNewResultSorted = MySortedLowVector;
        MyNewResultSorted.push_back(elementInMyNotSortedVector);
        MyNewResultSorted.insert(MyNewResultSorted.end(), MySortedHighVector.begin(), MySortedHighVector.end());


        return MyNewResultSorted;

    }
}

int maxElementInMySortedVector(const vector <int>& MySortedVector)
{
        // Можно решить так но можно просто вывести последний элемент в векторе
        // он и будет максимальным число так как вектор отсорированный
    int maxElementInMyVector = MySortedVector[0];
    for(int i = 0; i < MySortedVector.size(); i++)
    {
        if(MySortedVector[i] >= maxElementInMyVector)
        {
            maxElementInMyVector = MySortedVector[i];
        }
    }


    return maxElementInMyVector;
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Введите размер вектора: ";
    int sizeMyNotSortedVector;
    cin >> sizeMyNotSortedVector;

    vector <int> MyNotSortedVector;
    cout << "Введите элементы вектора: ";
    for(int i = 0; i < sizeMyNotSortedVector; i++)
    {
        int elementMyNotSortedVector;
        cin >> elementMyNotSortedVector;
        MyNotSortedVector.push_back(elementMyNotSortedVector);
    }

    vector <int> MyNewSortedVector = quicksort(MyNotSortedVector);
    for(int i = 0; i < MyNewSortedVector.size(); i++)
    {
        cout << MyNewSortedVector[i] << " ";
    }
    cout << "\n";

    cout << "Максимальный элемент в векторе: " << maxElementInMySortedVector(MyNewSortedVector) << "\n";









   return 0;
}
