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
#define limit 31800
 
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

vector <bool> is_prime(limit, true);
vector<int>prime;
void sieve(){
    is_prime[0] = is_prime[1] = false;
    for(int i = 3; i * i < limit; i += 2){
        if(is_prime[i]){
            for(int j = i * i; j < limit; j += 2*i)
                is_prime[j] = false;
        }
    }
    prime.pb(2);
    for(int j = 3; j < limit; j +=2)
        if(is_prime[j]== true)
            prime.pb(j);
    // for(auto i: prime) cout << i << " ";
}
int prime_factorization(ll n){
    int cnt = 0;
    for(ll i = 0; prime[i] * prime[i] <= n; i++){
        if(n % prime[i] == 0){
            while(n % prime[i] == 0){
                n /= prime[i];
                cnt++; 
            }
        }
    }
    if(n > 1) cnt++;
    // cout << n << " ";
    // cout << cnt << " ";
    return cnt;
}
void busted(){
    ll a, b, k; cin >> a >> b >> k;
    if(k == 1){
        if(a == 1 && b == 1){
            cout << "NO\n";
            return;
        }
        if(a == b){
            cout << "NO\n";
            return;
        }
        if(a % b == 0 || b % a == 0){
            cout << "YES\n";
            return;
        }
        else cout << "NO\n";
        return;
    }
    int ans = 0;
    ans = prime_factorization(a) + prime_factorization(b);
    if(ans < k)
        cout << "NO\n";
    else
        cout << "YES\n";
    
}
int main(){
    int tc; cin >> tc;
    sieve();
    while(tc--){
       busted();
    }
    return 0;
}