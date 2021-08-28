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
    int n; cin >> n;
    vi arr(n);
    for(auto & i : arr)
        cin >> i;
    vi freq(n + 1, 0);
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    int ans = 0;
    for(int i = 2; i <= 100; i++){
        int total_weight = i;
        for(int j = 1; j <= n; j++){
            if(freq[j] > 0 ){
                int remaining_weight = abs(j - total_weight);
                for(int k = j + 1; k <= n; k++){
                    if(freq[k] > 0 && k == remaining_weight){
                        ans = max(min(freq[j], freq[k]) / 2 , ans);
                    }
                }
            }
        }
    }
    cout << ans << '\n';
    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}