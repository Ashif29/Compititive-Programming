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
    vi v(n);
    for(auto &i : v) cin >> i;
    if(v[0] == 1){
        cout << n + 1 << " ";
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
        cout << '\n';
        return;
    }
    if(v[n-1] == 0){
        for(int i = 1; i <= n + 1; i++){
            cout << i << " ";
        }
        cout << '\n';
        return;
    }
    int pos = 0;
    for(int i = 0; i < n - 1; i++){
        if (v[i] == 0 && v[i + 1] == 1){
            pos = i + 1;
            break;
        }
    }
    if(pos == 0){
        cout << "-1\n";
        return;
    }
    for(int i = 1; i <= pos; i++){
        cout << i << " ";
    }
    cout << n + 1 << " ";
    for(int i = pos + 1; i <= n; i++)
        cout << i << " ";
    cout << '\n';    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}