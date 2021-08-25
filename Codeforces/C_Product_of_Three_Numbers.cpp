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
    vi divisors;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            divisors.pb(i);
            if(n / i != i)
                divisors.pb(n / i);
        }
    }
    // for(auto i : divisors) cout << i << " ";
    if(divisors.size() < 3){
        cout << "NO\n";
        return;
    }
    int a = divisors[0];
    int tmp = n / a;
    vi divi;
    for(int i = 2; i * i <= tmp; i++){
        if(tmp % i == 0){
            divi.pb(i);
            if(tmp / i != i)
                divi.pb(tmp / i);
        }
    }
    sort(divi.begin(), divi.end());
    int b = 1;
    for(int i = 0; i < divi.size(); i++){
        if(divi[i] != a){
            b = divi[i];
            break;
        }
    }
    int c = n / (a * b);
    if((c <= a || c <= b) || b < 2){
        cout << "NO\n";
        return;
    }
    cout << "YES\n" << a << " " << b << " " << c << '\n';



    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}