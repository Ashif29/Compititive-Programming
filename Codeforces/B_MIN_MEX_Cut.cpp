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
    string str; cin >> str;
    string tmp = str;
    int cnt = 0;
    int len = str.size();
    sort(tmp.begin(), tmp.end());
    if(tmp[0] == '0' && tmp[len - 1] == '0'){
        cout << "1\n";
        return;
    }
    if(tmp[0] == '1' && tmp[len - 1] == '1'){
        cout << "0\n";
        return;
    }
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == '0' && str[i + 1] == '1'){
            cnt++;
        }
        // cnt++;
    }
    
    if(str[len - 1] == '0'){
        cnt++;
    }
    if(cnt >= 2){
        cout << "2\n";
        return;
    }
    if(cnt == 1){
        cout << "1\n";
        return;
    }
    cout << 0 << '\n';
    return;
}

int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}