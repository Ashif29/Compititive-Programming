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

vector <string> strings;

string reversed(string str){
    reverse(str.begin(), str.end());
    return str;
}

bool is_Palindrome (string str){
    return str == reversed(str);
}

void busted(){
    int n, m; cin >> n >> m;
    strings.resize(n);
    for(auto &str : strings)
        cin >> str;
    string front, middle, back;
    for(int i = 0; i < n; i++){
        if(is_Palindrome(strings[i])){
            middle = strings[i];
            continue;
        }
        for (int j = i + 1; j < n; j++){
            if (strings[i] == reversed(strings[j])){
                front += strings[i];
                back = strings[j] + back;
                break;
            }
        }
    }
    string answer = front + middle + back;
    cout << answer.size() << '\n';
    cout << answer << '\n';
    return;
}
 
int32_t main(){
    Fast
    // int tc; cin >> tc;
    // while(tc--)
       busted();
    return 0;
}