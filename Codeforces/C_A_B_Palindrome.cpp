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
    int a, b; cin >> a >> b;
    string s; cin >> s;
    int len = a + b;
    for(int i = 0; i < len; i++){
        if(s[i] == '1'){
            if(s[len - i - 1] == '?'){
                s[len - i - 1] = s[i];
            }
            else if(s[len - i - 1] == '0'){
                cout << "-1\n";
                return;
            }
        }
        else if(s[i] == '0'){
            if(s[len - i - 1] == '?'){
                s[len - i - 1] = s[i];
            }
            else if(s[len - i - 1] == '1'){
                cout << "-1\n";
                return;
            }
        }
    }
    int ones = 0, zeros = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '1') ones++;
        else if(s[i] == '0') zeros++;
    }
    a -= zeros;
    b -= ones;
    for(int i = 0; i < len / 2; i++){
        if(s[i] == '?'){
            if(a > b){
                s[i] = s[len - i - 1] = '0';
                a -= 2;
            }
            else{
                s[i] = s[len - i - 1] = '1';
                b -= 2;
            }
        }
    }
    if(a == b + 1 && len % 2 == 1 && s[len / 2] == '?') {
        s[len / 2] = '0';
        a--; 
    }
    if(a + 1 == b && len % 2 == 1 && s[len / 2] == '?') {
        s[len / 2] = '1';
        b--; 
    }
    if(a == 0 && b == 0){
        cout << s << '\n';
        return;
    }
    cout << "-1\n";

    return;
}

int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}