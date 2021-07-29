/**
 *    In the name of Allah (SWT).
 *    We're nothing and you're everything.
 *    Ya Ali!
 *
 *    author:  Asif
 *    created: 01.05.2021 13:08:58
**/
  
#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
 
/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
 **/
 
void busted(){
    int n; cin >> n;
    int m; cin >> m;
    int z = m;
    vi v;
    while(n--){
        int x; cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    int mx = v[v.size() - 1];
    
    for(int i = 0; i < v.size(); i++){
        if(m >= mx - v[i]){
            m = m - (mx - v[i]);
            v[i] += (mx - v[i]);
            
        }
        if(m < mx - v[i]){
            m = 0;
            v[i] += m;
            
        }
        if(m <= 0) break;
    }
    // for(auto i: v){
    //     cout << i << " ";
    // }
    // cout << m << '\n';
    if(m > 0){
        int t = m / v.size();
        int mod = m % v.size();
        if(t > 0 ){
            for(int i = 0; i < v.size(); i++){
                v[i] += t;
            }
        }
        if(mod > 0){
            int i = 0;
            while(mod != 0){
                v[i] += 1;
                mod--;
                i++;
            }
        }
    }
    
    sort(v.begin(), v.end());
    cout << v[v.size() - 1] << " " << mx + z << '\n';
    return;
}
 
int32_t main(){
    // int tc; cin >> tc;
    // while(tc--){
        busted();
    // }
    return 0;
}




// another approach
// int32_t main(){
//     int n; cin >> n;
//     int m; cin >> m;
//     int mx = 0, sum = 0;
//     int i = n;
//     while(i--){
//         int x; cin >> x;
//         sum += x;
//         mx = max(x, mx);
//     }
//     cout << max(mx, (sum + m - 1) / n + 1) << " " << mx + m << '\n';
// }