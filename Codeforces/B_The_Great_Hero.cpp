
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
    ll h_attack, h_health, n; cin >> h_attack >> h_health >> n;
    vl m_attack(n), m_health(n);
    ll mx = -1, pos = -1;
    for(int i = 0; i < n; i++){
        cin >> m_attack[i];
        if(mx < m_attack[i]){
            mx = m_attack[i];
            pos = i;
        }
    }
    for(int i = 0; i < n; i++){
        cin >> m_health[i];
    }
    for(int i = 0; i < n; i++){
        if(pos == i) continue;
        if(h_health < 1)break;
        ll h_round = ceil(1.0 * m_health[i] / (h_attack * 1.0));
        h_health -= (h_round * m_attack[i]);
    }
    if(h_health < 1){
        cout << "NO\n";
        return;
    }
    ll h_round = ceil(1.0 * m_health[pos] / (h_attack * 1.0));
    ll m_round = ceil(1.0 * h_health / (m_attack[pos] * 1.0));
    if(h_round > m_round){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
    return;
}
 
int32_t main(){
    int tc; cin >> tc;
    while(tc--){
       busted();
    }
    return 0;
}