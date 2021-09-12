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

#define    Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define    INF                             (int)1e9
#define    MOD                             1000000007
#define    pb                              push_back
#define    eb                              emplace_back
#define    imax                            INT_MAX
#define    imin                            INT_MIN
#define    PI                              3.1415926535897932384626433832795
#define    VSORT                           sort(arr.begin(), arr.end())
#define    VRSORT                          sort(arr.rbegin(), arr.rend())
#define    V1SORT                          sort(v1.begin(), v1.end())
#define    V1RSORT                         sort(v1.rbegin(), v1.rend())

void busted(){
    ll n, k, x; cin >> n >> k >> x;
    vl arr(n);
    for(auto & i: arr) cin >> i;
    VSORT;
    vl diff;
    ll ans = n;
    for(ll i = 0; i < n - 1; i++){
        if(arr[i + 1] - arr[i] > x){
            diff.emplace_back(max(0LL, (arr[i + 1] - arr[i] - 1) / x ));
        }
        else diff.emplace_back(0);     
    }
    sort(diff.begin(), diff.end());
    for(ll i = 0; i < diff.size(); i++){
        if(k >= diff[i]){
            k -= diff[i];
            ans--;
        }
    }
    cout << ans << '\n';
    return;
}

int32_t main(){
    Fast
        busted();
    return 0;
}