/**
 *    author:  Asif
 *    created: 12.04.2021 09:23:31
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
 
void busted(int n){
    if(n % 2 == 0) cout << "White\n";
    else cout << "Black\n";
}
int main (){
    int n; cin >> n;
    busted(n);
    return 0;
}