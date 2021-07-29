/**
 *    author:  Asif
 *    created: 00.03.2021 00:00:00
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

ll primes[9] = {2, 11, 101, 1009, 10007, 100003, 1000003, 10000019, 100030001};
void busted(){
    ll a, b, c; cin >> a >> b >> c;
    ll ans1 = primes[c - 1];
    ll ans2 = primes[c - 1];
    string s1, s2;
    for(int i = 0; ; i++){
        ans1 *= 2;
        s1 = to_string(ans1);
        if(a == s1.length()){
            cout << ans1 << " ";
            break;
        }
    }
    for(int i = 0; ; i++){
        ans2 *= 3;
        s2 = to_string(ans2);
        if(b == s2.length()){
            cout << ans2 << "\n";
            break;
        }
    }
    // cout << __gcd(ans1, ans2) << '\n';
    return;
}
 
int main(){
    ll tc; cin >> tc;
    while(tc--){
        busted();
    }
    return 0;
}