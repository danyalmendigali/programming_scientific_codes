#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

int findSmallest(int arr[], int size_array);

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_array;
    cout << "Введите размер массива: ";
    cin >> size_array;
    int arr[size_array];
    for(int i = -1; i < size_array - 1; i++)
    {
        cout << "Введите элемент #" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << findSmallest(arr, size_array);



   return 0;
}


int findSmallest(int arr[], int size_array) {
   int smallest = arr[0];
   int smallest_index = 0;

   for(int i = 0; i < size_array; i++)
   {
       if(arr[i] < smallest)
       {
           smallest = arr[i];
           smallest_index = i;
       }
   }

   return smallest_index + 1;


}
