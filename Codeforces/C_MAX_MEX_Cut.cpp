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
    int n; cin >> n;
    string a, b; cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0' && b[i] == '0'){
            if(i + 1 < n && a[i + 1] == '1' && b[i + 1] == '1'){
                cnt += 2; i++;
                continue;
            }
            cnt++;
        }
        if(a[i] == '1' && b[i] == '1'){
            if(i + 1 < n && a[i + 1] == '0' && b[i + 1] == '0'){
                cnt += 2; i++;
                continue;
            }
        }
        else if(a[i] == '1' && b[i] == '0'){
            cnt += 2;
        }
        else if(a[i] == '0' && b[i] == '1'){
            cnt += 2;
        }  
    }
    // if(a[n - 1] == '0' && b[n - 1] == '0')cnt++;
    cout << cnt << '\n';
    return;
}

int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}