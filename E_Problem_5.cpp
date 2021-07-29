/**
 *    author:  Asif
 *    created: 17.03.2021 00:51:00
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
 
void busted(int tc){
    int a; cin >> a;
    int b; cin >> b;
    if(a > b)cout << ">" << "\n";
    else if(a < b)cout << "<" << "\n";
    else cout << "=" << "\n";
}
 
int main(){
    int tc; cin >> tc;
    while (tc--){
        busted(tc);
    }
}