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
       int n, m; cin >> n >> m;
       vector<int> a(n), b(m);
       for(int i = 0; i < n; i++){
              cin >> a[i];
       }
       for(int i = 0; i < m; i++){
              cin >> b[i];
       }
       int cnt = 0;
       int mx = -1;
       for(int i = 0; i < n; i++){
              int l = 0, r = m - 1;
              int num = a[i];
              while(l <= r){
                     int md = (l + r) >> 1;
                     if(b[md] == num){
                            int left = md, right = md;
                            while(left >= 0 && b[left] == num){
                                   left--;
                            }
                            while(right < m && b[right] == num){
                                   right++;
                            }
                            cnt += (right - left - 1);
                            break;
                     }
                     else if(b[md] < num){
                            l = md + 1;
                     }
                     else{
                            r = md - 1;
                     }
              }
       }

       cout << cnt << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
