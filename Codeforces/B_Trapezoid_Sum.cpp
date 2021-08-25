/**
 *    author:  Asif
 *    created: 12.04.2021 10:21:31
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
 
int main (){
    int n; cin >> n;
    ll sum = 0;
    while(n--){
        ll x; cin >> x;
        ll y; cin >> y;
        sum += (y * (y + 1) - x * (x - 1)) / 2;
    }
    cout << sum << '\n';
    return 0;
}