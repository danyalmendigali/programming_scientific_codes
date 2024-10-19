#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>

#define ll long long
#define sz size()
#define pb(a) push_back(a)
#define F first
#define S second
#define all(dp) dp.begin(), dp.end()
#define mendigalitrue ios::sync_with_stdio(false); cin.tie(); cout.tie(0);

using namespace std;


void solve()
{
       string t, p; cin >> t >> p;
       int res = 0, res2 = 0;
       for(int i = 0; i < t.sz - p.sz; i++){
              bool ok = true;
              for(int j = 0; j < p.sz - 1; j++){
                     if(p[j] != t[i + j]){
                            ok = false;
                            break;
                     }
              }
              if(ok){
                     res++;
              }
       }

       cout << res << endl;

}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
