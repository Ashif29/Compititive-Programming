/**
 *    author:  Asif
 *    created: 19.03.2021 01:09:45
**/
#include <bits/stdc++.h>
using namespace std;
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
const int lim = 1e6;
 
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
    string s; cin >> s;
    string x; cin >> x;
    if(s == x) cout << "0" << '\n';
    else if(s.size() <= x.size()) return 0;
    else{
        for(int i = 0; i < s.size(); i++){
            if(s.substr(i, x.size()) == x) cout << i << '\n';
        }
    }
    return 0;
}