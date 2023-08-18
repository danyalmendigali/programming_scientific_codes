#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

const int INF = 1e9;

vector<vector<int>> floydWarshall(vector<vector<int>> &matrix)
{
    int size_matrix = matrix.size();
    vector<vector<int>> dp = matrix;

    for(int i = 0; i < size_matrix; i++)
    {
        dp[i][i] = 0;
    }

    for(int k = 0; k < size_matrix; k++)
    {
        for(int i = 0; i < size_matrix; i++)
        {
            for(int j = 0; j < size_matrix; j++)
            {
                if(dp[i][k] != INF && dp[k][j])
                {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[j][k]);
                }
            }
        }
    }


    return dp;
}

int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int size_matrix;
    cout << "Введите размер матрицы: ";
    cin >> size_matrix;

    vector<vector<int>> dp(size_matrix, vector<int>(size_matrix));
    cout << "Введите матрицу: " << "\n";
    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            cin >> dp[i][j];
        }
    }


    vector<vector<int>> dist = floydWarshall(dp);

    for(int i = 0; i < size_matrix; i++)
    {
        for(int j = 0; j < size_matrix; j++)
        {
            if(dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }




    return 0;
}
