/**
 *    author:  Asif
 *    created: 16.03.2021 13:01:37
**/
#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
 
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

int main()
{
    string x; cin >> x;
    sort(x.begin(), x.end());
    // string y; cin >> y;
    // bool flag = true;
    // for(int i = 0; i < x.size(); i++){
    //     if(x[i] < 93) x[i] = tolower(x[i]);
    //     if(y[i] < 93) y[i] = tolower(y[i]);
    //     if(x[i] > y[i]){
    //         cout << "1" << '\n';
    //         flag = false;
    //         break;
    //     }
    //     else if(x[i] < y[i]){
    //         cout << "-1" << '\n';
    //         flag = false;
    //         break;
    //     }
    // }
    // if(flag) cout << "0" << '\n';
    cout << x;
    return 0;
}