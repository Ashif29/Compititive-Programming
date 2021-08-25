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
    int W, H; cin >> W >> H;
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    int w, h; cin >> w >> h;
    int a = imax, b = imax, c = imax, d = imax;
    if((x2 - x1) + w > W && (y2 - y1) + h > H){
        cout << "-1\n";
        return;
    }
    if((x2 - x1) + w <= W){
        a = w - x1;
        b = x2 + w - W;
        if(a < 1 || b < 1){
            cout << "0.000000000\n";
            return;
        }
    }
    if((y2 - y1) + h <= H){
        c = h - y1;
        d = y2 + h - H;
        if(c < 1 || d < 1){
            cout << "0.000000000\n";
            return;
        }
    }
    cout << min({a, b, c, d}) << ".000000000\n";
    return;
}
 
int32_t main(){
    ll tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}