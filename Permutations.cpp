/**
 *    author:  Asif
 *    created: 31.05.2021 23:14:32
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
    if(n == 1){
        cout << "1";
        return 0;
    }
    if(n < 4){
        cout << "NO SOLUTION";
        return 0;
    }
    for(int i = 2; i <= n; i += 2) cout << i << " ";
    for(int i = 1; i <= n; i += 2) cout << i << " ";
    return 0;
}