#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>
using namespace std;

const int INF = 1e9;

vector<int> bubble_sort(vector<int> myVector)
{
    int size_vector = myVector.size();
    for(int i = 0; i < size_vector - 1; i++)
    {
        for(int j = 0; j < size_vector - 1 - i; j++)
        {
            if(myVector[j] > myVector[j + 1])
            {
                swap(myVector[j], myVector[j + 1]); // исправлено здесь
            }
        }
    }

    return myVector;
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_vector;
    cout << "Введите размер вектора: ";
    cin >> size_vector;

    vector<int> myVector(size_vector);
    cout << "Введите вектор: ";
    for(int i = 0; i < size_vector; i++)
    {
        cin >> myVector[i];
    }

    vector<int> myVectorBubbleSort = bubble_sort(myVector);


    cout << "Вектор после сортировки: ";
    for(int i = 0; i < myVectorBubbleSort.size(); i++)
    {
        cout << myVectorBubbleSort[i] << " ";
    }









    return 0;
}
