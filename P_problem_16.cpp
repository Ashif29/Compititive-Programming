/**
 *    author:  Asif
 *    created: 17.03.2021 17:19:31
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
int main(){
    int n; cin >> n;
    vi v;
    while(n--){
        int x; cin >> x;
        v.pb(x);
    }
    int cnt = 0;
    for(int i = 0; i < v.size() - 1; i++){
        for(int j = v.size() - 1; j > i; j--){
            if(v[j] < v[j - 1]){
                swap(v[j],  v[j - 1]);
                cnt++;
            }
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout  << v[i];
        if(i != v.size() - 1) cout << " ";
    }
    cout << '\n';
    cout << cnt << '\n';
    return 0;
}