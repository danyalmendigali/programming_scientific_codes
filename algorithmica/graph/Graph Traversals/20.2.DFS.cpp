#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(a) a.begin(), a.end()

const ll N = 2e5 + 7 , mod = 1e9 + 9 ;

vector<ll> g[N];
bool used[N];
vector<int> path;

void dfs(int v){
       used[v] = true;
       path.pb(v);
       for(int u : g[v]){
              if(!used[u]){
                     dfs(u);
              }
       }
}

void solve()
{
       int n; cin >> n;
       int a;
       for(int i = 0; i < n; i++){
              for(int j = 0; j < n; j++){
                     cin >> a;
                     if(a){
                            g[i].pb(j);
                     }
              }
       }

       for(int i = 0; i < n; i++){
              cout << i << ": ";
              for(auto j : g[i]){
                     cout << j << " ";
              }
              cout << endl;
       }
       cout << endl << endl;


       dfs(0);
       for(auto i : path){
              cout << i << " ";
       }




}

signed main()
{
       ios::sync_with_stdio(false);
       cin.tie(0);
       cout.tie(0);
       int t;
       t = 1;
       //cin >> t;
       while(t--) solve();

       return 0;

}
