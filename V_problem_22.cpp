/**
 *    author:  Asif
 *    created: 17.03.2021 23:50:32
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
typedef vector<vc> vvc;
int cs = 0;
void busted(int tc){
    int n; cin >> n;
    vi v;
    while(n--){
        int x; cin >> x;
        v.pb(x);
    }
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        int min_val = i;
        for(int j = i + 1; j < v.size(); j++){
            if(v[j] < v[min_val]) min_val = j;
        }
        if(v[i] > v[min_val]){
            ans++;
            swap(v[i], v[min_val]);
        }
    }
    cout << "Case " << cs << ": " << ans << '\n';
    return;
}
int main(){
    int tc; cin >> tc;
    while (tc--){
        cs++;
        busted(tc);
    }
    return 0;
}