/**
 *    author:  Asif
 *    created: 17.03.2021 04:20:35
**/
#include <bits/stdc++.h>
using namespace std;
 
// #define INF (int)1e9
// #define PI 3.1415926535897932384626433832795
// #define MOD 1000000007
// #define pb push_back
// #define imax INT_MAX
// #define imin INT_MIN
 
// typedef long long ll;
// typedef unsigned long long ull;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// typedef vector<char> vc;
// typedef vector<vc> vvc;

int main(){
    int a; cin >> a;
    int ans = a + (a * a) + (a * a * a);
    cout << ans << '\n';
    return 0;
}