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
    n *= 2;
    vi even;
    vi odd;
    vi arr(n);
    for(auto &i : arr) cin >> i;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even.pb(i + 1);
        }
        else{
            odd.pb(i + 1);
        }
    }
    if(even.size() % 2 == 1){
        even.pop_back();
        odd.pop_back();
    }
    else if(even.size() > 1){
        even.pop_back();
        even.pop_back();
    }
    else if (odd.size() > 1){
        odd.pop_back();
        odd.pop_back();
    }
    if(even.size() > 1){
        for(int i = 0; i < even.size() - 1; i += 2){
            cout << even[i] << " " << even[i + 1] << '\n';
        }
    }
    
    if(odd.size() > 1){
        for(int i = 0; i < odd.size() - 1; i += 2){
            cout << odd[i] << " " << odd[i + 1] << '\n';
        }
    }
    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}