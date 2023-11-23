
#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define VectorVector vector<vector<int>>

// Реализация BFS

void myMatrixShortestWayAlgorithms(VectorVector &myMatixBFS, int startShortestPath, int endShortestPath)
{
    int sizeMyMatrixWay = myMatixBFS.size();
    vector <int> visitedMyMatrixWay(sizeMyMatrixWay, 0);
    vector <int> vertexTracking(sizeMyMatrixWay, -1);


    queue <int> enumerationQueue;
    enumerationQueue.push(startShortestPath);
    visitedMyMatrixWay[startShortestPath] = true;

    while(!enumerationQueue.empty())
    {
        int vertexBeginningQueue = enumerationQueue.front();
        enumerationQueue.pop();
        cout << "Посещена вершина: " << vertexBeginningQueue << "\n";
        for(int elementMatrix = 0; elementMatrix < sizeMyMatrixWay; elementMatrix++)
        {
            if(myMatixBFS[vertexBeginningQueue][elementMatrix] == 1 && !visitedMyMatrixWay[elementMatrix])
            {
              enumerationQueue.push(elementMatrix);
              visitedMyMatrixWay[elementMatrix] = true;
              vertexTracking[elementMatrix] = vertexBeginningQueue;
            }

        }

    }

    vector <int> newVertexBeginningQueue;
    for(int i = endShortestPath; i != -1; i = vertexTracking[i])
    {
        newVertexBeginningQueue.push_back(i);
    }

    cout << "Кратчайший путь: ";
    for(int i = newVertexBeginningQueue.size() - 1; i >= 0; i--)
    {
        cout << newVertexBeginningQueue[i] << " ";
    }
    cout << "\n";

}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int sizeMyMatrixWay;
    cout << "Введите размер матрицы: ";
    cin >> sizeMyMatrixWay;
    VectorVector myMatixBFS(sizeMyMatrixWay);

    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < sizeMyMatrixWay; i++)
    {
        myMatixBFS[i].resize(sizeMyMatrixWay);
        for(int j = 0; j < sizeMyMatrixWay; j++)
        {
            cin >> myMatixBFS[i][j];
        }
    }

    int startShortestPath, endShortestPath;
    cout << "Введите начальную вершину: ";
    cin >> startShortestPath;
    cout << "Введите конечную вершину: ";
    cin >> endShortestPath;

    myMatrixShortestWayAlgorithms(myMatixBFS, startShortestPath, endShortestPath);





    return 0;
}
