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
        int elementMyVector = MyVector[0];
        vector <int> low, high;

        for(int i = 1; i < MyVector.size(); i++)
        {
            if(MyVector[i] < elementMyVector)
            {
                low.push_back(MyVector[i]);
            }
            else
            {
                high.push_back(MyVector[i]);
            }
        }

        vector <int> sortedLow = quicksort(low);
        vector <int> sortedHigh = quicksort(high);

        vector <int> sortedVector = sortedLow;
        sortedVector.push_back(elementMyVector);
        sortedVector.insert(sortedVector.end(), sortedHigh.begin(), sortedHigh.end());


        return sortedVector;
    }
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a;
    cout << "Введите размер вектора: ";
    cin >> a;
    vector <int> MyVector;
    for(int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        MyVector.push_back(b);
    }
    vector <int> MyVectorSorted = quicksort(MyVector);


    cout << "Отсортированный вектора: ";
    for(int i = 0; i < MyVectorSorted.size(); i++)
    {
        cout << MyVectorSorted[i] << " ";
    }
    cout << "\n";
    double medianaMySortedVector;

    if(MyVectorSorted.size() % 2 == 1)
    {
        medianaMySortedVector = MyVectorSorted[MyVectorSorted.size() / 2];
        cout << "Медиана: " << medianaMySortedVector;
        return false;
    }
    else
    {
        medianaMySortedVector = MyVectorSorted[MyVectorSorted.size() / 2] + MyVectorSorted[(MyVectorSorted.size() / 2) - 1];
        medianaMySortedVector /= 2.0;
        cout << "Медиана: " << medianaMySortedVector;
        return false;
    }





   return 0;
}
