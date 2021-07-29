/**
 *    In the name of Allah (SWT).
 * 
 *    ___________________________
 * 
 *    author:  Asif
 *    created: 22.04.2021 13:17:45
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
 
void busted(int tc){
    string s1; cin >> s1;
    string s2; cin >> s2;
    string x;
    string y;
    int a = max(s1.length(), s2.length());
    int b = min(s1.length(), s2.length());
    if(s1.length() >= s2.length()){
        x = s1;
        y = s2;
    }
    else{
        x = s2;
        y = s1;
    }
    // cout << x << " " << y << '\n';
    // cout << a << " " << b << '\n';
    vi v;
    int carry = 0;
    if(a == b){
        for(int i = 0; i < a; i++){
            int m = x[i] - '0' + carry;
            int n = y[i] - '0';
            v.pb((m + n) % 10);
            carry = (m + n) / 10;
        }
        if(carry) v.pb(carry);
        bool flag = false;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == 0 && !flag){
                flag = false; continue;
            }
            else flag = true;
            cout << v[i];
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < b; i++){
        int m = x[i] - '0' + carry;
        int n = y[i] - '0';
        v.pb((m + n) % 10);
        carry = (m + n) / 10;
    }
    for(int i = b; i < x.size(); i++){
        int m = x[i] - '0' + carry;
        v.pb(m % 10);
        carry = m / 10;
    }
    if(carry) v.pb(carry);
    bool flag = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0 && !flag){
            flag = false; continue;
        }
        else flag = true;
        cout << v[i];
    }
    cout << '\n';
    return;
}
 
int32_t main(){
    int tc; cin >> tc;
    while(tc--){
        busted(tc);
    }
    return 0;
}