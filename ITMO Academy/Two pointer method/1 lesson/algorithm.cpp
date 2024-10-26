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
       int a, b; cin >> a >> b;
       vector<int> vec1(a), vec2(b);
       for(int i = 0; i < vec1.sz; i++){
              cin >> vec1[i];
       }
       for(int i = 0; i < vec2.sz; i++){
              cin >> vec2[i];
       }

       vector<int> c(a + b);
       for(int i = 0; i < a; i++){
              for(int j = 0; j < b; j++){
                     while(i < a || j < b){
                            if(j == b || i < a && vec1[i] < vec2[j]){
                                   c[i + j] = vec1[i];
                                   i++;
                            }
                            else{
                                   c[i + j] = vec2[j];
                                   j++;
                            }
                     }
              }
       }


       for(int i = 0; i < a + b; i++){
              cout << c[i] << " ";
       }
       cout << endl;


}

signed main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--) solve();




    return 0;
}
