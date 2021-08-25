/** In the name of Allah (SWT).
 *
 *    author:  Asif
 *    created: 00.00.2021 00:00:00
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
 
#define    FOR(i, j, k, in)                for (int i = j; i < k; i += in)
#define    RFOR(i, j, k, in)               for (int i = j; i >= k; i -= in)
#define    REP(i, j)                       FOR(i, 0, j, 1)
#define    RREP(i, j)                      RFOR(i, j, 0, 1)
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
 */
 
void busted(){
    int n, k; cin >> n >> k;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    vector <int> freq(n + 1, 0);
    vector <int> ans(n, 0);
    vector < vector<int> > occ(n + 1, vector <int> ());
    vector <int> toColor;  
    for(int i = 0; i < n; i++){
        freq[vec[i]]++;
        occ[vec[i]].push_back(i);
    } 
    for(int i = 1; i <= n; i++){
        if(freq[i] >= k){
            for(int j = 0; j < k; j++){
                ans[occ[i][j]] = j + 1;
            }
        }
        else{
            for(int j = 0; j < freq[i]; j++){
                toColor.push_back(occ[i][j]);
            }
        }
    }
    int lim = toColor.size() - toColor.size() % k;
    for(int i = 0; i <= lim - k; i += k){
        for(int j = 0; j < k; j++){
            ans[toColor[j + i]] = j + 1;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
    return;
}
 
int32_t main(){
    ll tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}
