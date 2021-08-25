/** In the name of Allah (SWT).
 * We're nothing and you're everything.
 * Ya Ali!
 *
 *
 *    author:  Asif
 *    created: 00.05.2021 00:00:00
**/
#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
 
/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
 */
 
void busted(){
    int n; cin >> n;
    vi v;
    int cnt = 0;
    int tmp = n;
    while(tmp--){
        int x; cin >> x;
        v.pb(x);
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i]%2 == 0 && v[j]%2 == 1) cnt++;
            else if(v[j]%2 == 0 && v[i]%2 == 1) cnt++;
            // else if((v[i]*2 % v[j] == 0 && v[j] > 1) || (v[j] * 2 % v[i] == 0 && v[i] > 1)) cnt++;
            else if(__gcd(v[i], v[j]) > 1) cnt++;
        }
    }
    cout << cnt << "\n";
    return;
}
 
int32_t main(){
    int tc; cin >> tc;
    while(tc--){
       busted();
    }
    return 0;
}