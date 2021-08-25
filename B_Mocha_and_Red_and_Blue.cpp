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
    string s; cin >> s;
    char ch = 'B';
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R'){
            if(i % 2 == 0)
                ch = 'R';
            else ch = 'B';
            break;
        }
        if(s[i] == 'B'){
            if(i % 2 == 0)
                ch = 'B';
            else ch = 'R';
            break;
        }
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'R'){
            ch = 'B';
            continue;
        }
        if(s[i] == 'B'){
            ch = 'R';
            continue;
        }
        s[i] = ch;
        if(s[i] == 'R'){
            ch = 'B';
        }
        if(s[i] == 'B'){
            ch = 'R';
        }

    }
    cout << s << '\n';
    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}