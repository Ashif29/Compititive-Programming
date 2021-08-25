/**
 *    author:  Asif
 *    created: 11.04.2021 13:56:45
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
    sort(v.begin(), v.end());
    int temp;
    int m = 0;
    int cnt = 1;
    for(int i = 0; i < v.size(); ){
        temp = v[i];
        cnt = 0;
        while(v[i] == temp){
            cnt++;
            i++;
        }
        m = max(m, cnt);
    }
    cout << m << '\n';
    return 0;
}