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
    string s; cin >> s;
    string frist_team = "";
    string second_team = "";
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0) frist_team.pb(s[i]);
        else second_team.pb(s[i]);
    }
    int x = 0, y = 0;
    for(int i = 0; i < 5; i++){
        if(frist_team[i] == '?') x++;
        if(second_team[i] == '?') y++;
    }
    if(x >= y){
        for(int i = 0; i < 5; i++){
            if(frist_team[i] == '?'){
                frist_team[i] = '0';
            }
        }
    }
    if(x < y){
        for(int i = 0; i < 5; i++){
            if(second_team[i] == '?'){
                second_team[i] = '0';
            }
        }
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < 5; i++){
        if(frist_team[i] == '1')cnt1++;
        if(second_team[i] == '1')cnt2++;
        if(cnt1 > cnt2 + (4 - i) ){
            cout << i + i - 1 << '\n';
            return;
        }
        if(cnt2 > cnt1 + (4 - i) ){
            cout << i + i << '\n';;
            return;
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