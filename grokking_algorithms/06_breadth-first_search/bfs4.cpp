#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)

// Поиск в ширину в невзвешенном графе

// Дан невзвешенный неориентированный граф и его стартовая вершина. Ваша задача - вывести все вершины,
// которые можно достичь из стартовой вершины с помощью обхода в ширину.

void bfs(vector<vector<int>>& myMatrixBFS, int startPlaceMatrixBFS)
{
    int sizemyMatrixBFS = myMatrixBFS.size();
    vector <bool> visitedmyMatrixBFS(sizemyMatrixBFS, 0);
    queue <int> queuemyMatrixBFS;
    queuemyMatrixBFS.push(startPlaceMatrixBFS);

    visitedmyMatrixBFS[startPlaceMatrixBFS] = true;

    while(!queuemyMatrixBFS.empty())
    {
        int startElementInMyMatrixBFS = queuemyMatrixBFS.front();
        queuemyMatrixBFS.pop();

        cout << "Посещена вершина: " << startElementInMyMatrixBFS << "\n";

        for(int elementMatrix = 0; elementMatrix < sizemyMatrixBFS; elementMatrix++)
        {
           if(myMatrixBFS[startElementInMyMatrixBFS][elementMatrix] == 1 && !visitedmyMatrixBFS[elementMatrix])
           {
               queuemyMatrixBFS.push(elementMatrix);
               visitedmyMatrixBFS[elementMatrix] = true;
           }
        }
    }

}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "Напишите размер матрицы: ";
    int sizeMyMatrixBFS;
    cin >> sizeMyMatrixBFS;
    vector<vector<int>> myMatrixBFS(sizeMyMatrixBFS);

    cout << "Введите матрицу рамером: " << sizeMyMatrixBFS << "*" << sizeMyMatrixBFS << "\n";
    for(int i = 0; i < sizeMyMatrixBFS; i++)
    {
        for(int j = 0; j < sizeMyMatrixBFS; j++)
        {
            cin >> myMatrixBFS[i][j];
        }
    }

    int startPlaceMatrixBFS = 0;
    bfs(myMatrixBFS, startPlaceMatrixBFS);





    return 0;
}
