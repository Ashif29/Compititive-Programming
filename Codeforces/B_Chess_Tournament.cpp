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
    string s; cin >> s;
    char arr[n][n];
    set <int> remaining;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 'X';
            remaining.insert(i);
        }
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            for(int j = 0; j < n; j++){
                if(i == j)continue;
                else{
                    arr[i][j] = '=';
                    arr[j][i] = '=';
                }
            }
            remaining.erase(i);
        }
    }
    if(remaining.size() < 3 && !remaining.empty()){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(remaining.empty()){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << arr[i][j] ;
            }
            cout << '\n';
        }
        return;
    }
    vi vec;
    for(auto itr : remaining){
        vec.pb(itr);
    }
    for(int i = 0; i < vec.size() - 1; i++){
        arr[vec[i]][vec[i + 1]] = '+';
        arr[vec[i + 1]][vec[i]] = '-';
    }
    arr[vec[vec.size() - 1]][vec[0]] = '+';
    arr[vec[0]][vec[vec.size() - 1]] = '-';
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'X' && i != j){
                arr[i][j] = '=';
                arr[j][i] = '=';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] ;
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