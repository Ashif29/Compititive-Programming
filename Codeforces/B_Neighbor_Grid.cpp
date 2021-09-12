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

int arr[301][301];

void busted(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] > 4 || arr[0][0] > 2 || arr[n - 1][0] > 2 || arr[0][m - 1] > 2 || arr[n - 1][m - 1] > 2){
                cout << "NO\n";
                return;
            }
            if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
                if(arr[i][j] > 3){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if((i == 1 && j == 1) || (i == 1 && j == m) || (i == n && j == 1) || (i == n && j == m))
                cout << "2 ";
            else if(i == n || i == 1 || j == 1 || j == m)
                cout << "3 ";
            else cout << "4 ";
        }
        cout << '\n';
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