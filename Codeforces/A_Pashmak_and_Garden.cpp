/**
 *    author:  Asif
 *    created: 16.04.2021 20:24:32
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
 

int main(){
    int x1; cin >> x1;
    int y1; cin >> y1;
    int x2; cin >> x2;
    int y2; cin >> y2;
    if(x1 == y1 && x2 == y2 || x1 == y2 && x2 == y1 || abs(x1 - x2) == abs(y1 - y2)) 
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
    else if(y1 == y2){
        int r = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << x1 << " " << y1 + r << " " << x2 << " " << y2 + r << '\n';
    }
    else if(x1 == x2){
        int r = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << x1 + r << " " << y1 << " " << x2 + r << " " << y2 << '\n';
    }
    else if(x1 - y1 == x2 - y2){
         cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
    }
    else cout << "-1\n";
    return 0;
}