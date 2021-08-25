/**
 *    author:  Asif
 *    created: 13.04.2021 09:04:45
**/
#include <bits/stdc++.h>
using namespace std;
 
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
typedef vector<string> vs;

int main (){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int m; cin >> m;
        vs vss;
        vi v;
        vi vt;
        while(m--){
            string s; cin >> s;
            int cnt = 0;
            for (int i = 0; i < s.size(); i++){
                for (int j = i; j < s.size(); j++){
                    if(s[j] < s[i]) cnt++;
                }
            }
            vss.pb(s);
            v.pb(cnt);
            vt.pb(cnt);
        }
        sort(vt.begin(), vt.end());
        for (int i = 0; i < v.size(); i++){
            for (int j = 0; j < v.size(); j++){
                if(v[j] == vt[i] && v[j] != -1){
                    cout << vss[j] << '\n';
                    v[j] = -1;
                    break;
                }
            }
        }
        if(tc>0) cout << '\n';
    }
    return 0;
}