#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

vector <int> selectionSort(vector <int> arr);
int findSmallest(const vector <int>& arr);


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_vector;
    cout << "Введите размер вектора: ";
    cin >> size_vector;
    vector <int> arr;
    for(int i = 0; i < size_vector; i++)
    {
        int num;
        cout << "Введите элемент #" << i + 1 << ": ";
        cin >> num;
        arr.push_back(num);
    }

    vector<int> sortedArr = selectionSort(arr);
    for (int i = 0; i < sortedArr.size(); i++) {
        cout << sortedArr[i] << " ";
    }





   return 0;
}


int findSmallest(const vector<int>& arr) {
   int smallest_index = 0;

   for(int i = 1; i < arr.size(); i++)
   {
       if(arr[i] < arr[smallest_index])
       {
           smallest_index = i;
       }
   }

   return smallest_index;


}

vector <int> selectionSort(vector <int> arr)
{
    vector <int> newArr;

    while(!arr.empty()) {
        int smallest_index = findSmallest(arr);
        newArr.push_back(arr[smallest_index]);
        arr.erase(arr.begin() + smallest_index);
    }

    return newArr;
}


