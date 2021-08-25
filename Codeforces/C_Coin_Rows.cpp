/**   In the name of Allah (SWT).
 *
 *    author:  Asif
 *
**/
#include <bits/stdc++.h>
using namespace std;
 
typedef    long long                       ll;
typedef    unsigned long long              ull;
typedef    vector<int>                     vi;
typedef    vector<vi>                      vvi;
typedef    vector<ll>                      vl;
typedef    vector<vl>                      vvl;
typedef    vector<char>                    vc;
typedef    vector<vc>                      vvc;
typedef    pair<int, int>                  pii;
typedef    pair<ll, ll>                    pll;
typedef    pair<string, string>            pss;
typedef    map<int, int>                   mii;
typedef    unordered_map<int, int>         umap_ii;
typedef    unordered_map<string, int>      umap_si;
 
#define    INF                             (int)1e9
#define    PI                              3.1415926535897932384626433832795
#define    MOD                             1000000007
#define    pb                              push_back
#define    imax                            INT_MAX
#define    imin                            INT_MIN
#define    VSORT                           sort(v.begin(), v.end())
#define    VRSORT                          sort(v.rbegin(), v.rend())
#define    V1SORT                          sort(v1.begin(), v1.end())
#define    V1RSORT                         sort(v1.rbegin(), v1.rend())
 
void busted(){
    ll m; cin >> m;
    ll a[m + 1], b[m + 1];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    ll sum1[m + 1], sum2[m + 1];
    sum1[0] = a[0]; sum2[0] = b[0];
    for(int i = 1; i < m; i++){
        sum1[i] = sum1[i - 1] + a[i];
    }
    for(int i = 1; i < m; i++){
        sum2[i] = sum2[i - 1] + b[i];
    }
    ll ans = sum1[m - 1] - sum1[0];
    for(int i = 1; i < m; i++){
        ll x = sum1[m - 1] - sum1[i];
        ll y = sum2[i - 1];
        ans = min(ans, max(x, y));
    }
    cout << ans << '\n';
    return;
}
 
int32_t main(){
    ll tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}