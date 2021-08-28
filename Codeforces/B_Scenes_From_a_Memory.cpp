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
#define    VSORT                           sort(arr.begin(), arr.end())
#define    VRSORT                          sort(arr.rbegin(), arr.rend())
#define    V1SORT                          sort(v1.begin(), v1.end())
#define    V1RSORT                         sort(v1.rbegin(), v1.rend())

bool primes[100];
int n;
string str; 

bool helper1(){
    for(int i = 0; i < n; i++){
        if(!primes[str[i] - '0']){
            cout << "1\n" << str[i] << '\n';
            return true;
        }
    }
    return false;
}
bool helper2(){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(!primes[(str[i] - '0') * 10 + str[j] - '0']){
                cout << "2\n" << str[i] << str[j] << '\n';
                return true;
            }
        }
    }
    return false;
}

void busted(){
    cin >> n;
    cin >> str;
    if(!helper1()){
        helper2();
    }
    return;
}

int32_t main(){
    Fast
    for(int i = 2; i < 100; i++){
        primes[i] = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0)
                primes[i] = false;
        }        
    }
    // for(auto i : primes) cout << i << " ";
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}