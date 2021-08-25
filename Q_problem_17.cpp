/**
 *    author:  Asif
 *    created: 18.03.2021 00:14:32
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
// int cs = 0;
void busted(int n){
    // int n; cin >> n;
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
    for(int i = 0; i < v.size(); i++){
        cout  << v[i];
        if(i != v.size() - 1) cout << " ";
    }
    cout << '\n';
    cout << ans << '\n';
    return;
}
int main(){
    int n; cin >> n;
    busted(n);
    // int tc; cin >> tc;
    // while (tc--){
    //     cs++;
    //     busted(tc);
    // }
    return 0;
}