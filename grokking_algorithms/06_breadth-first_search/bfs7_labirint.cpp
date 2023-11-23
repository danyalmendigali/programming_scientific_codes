#include <bits/stdc++.h>
#include <windows.h>
#include <iterator>
using namespace std;

#define ar array
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)


const int INF = 1e9;

int bfs(vector <string> &a, int startY, int startX, int finishY, int finishX)
{
    int h = a.size(), w = a[0].size();

    vector<vector<int>> dist(h, vector <int>(w, INF));
    queue<pair<int, int>> q;


    dist[startY][startX] = 0;
    q.push({ startY, startX });

    vector <int> dy = {-1, 0, 1, 0};
    vector <int> dx = {0, 1, 0, -1};

    while(q.empty())
    {
        auto [y, x] = q.front();
        q.pop();

        for(int d = 0; d < dy.size(); d++)
        {
            int ty = y + dy[d];
            int tx = x + dx[d];

            if(0 <= ty && ty < h && 0 <= tx && tx < w && a[ty][tx] != '#' && dist[ty][tx] > dist[y][x] + 1)
            {
                dist[ty][tx] = dist[y][x] + 1;
                q.push({ ty, tx });
            }
        }
    }

    return dist[finishY][finishX];
}


int main() {
    cin.tie();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int h, w;
    cin >> h >> w;
    vector <string> a(h);
    int startX, startY;
    int finishX, finishY;

    for(int y = 0; y < h; y++)
    {
        cin >> a[y];
        for(int x = 0; x < w; x++)
        {
            if(a[x][y] == 'S')
            {
                startY = y;
                startX = x;
            }
            else if(a[y][x] == 'F')
            {
                finishX = x;
                finishY = y;
            }
        }

    }








    return 0;
}

