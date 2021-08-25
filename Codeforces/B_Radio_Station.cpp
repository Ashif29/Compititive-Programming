/**
 *    author:  Asif
 *    created: 11.04.2021 15:30:43
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
map < string, string > MAP;

int main(){
    int n; cin >> n;
    int m; cin >> m;
    while(n--){
        string a; cin >> a;
        string b; cin >> b;
        MAP[b] = a;
    }
    while(m--){
        string x; cin >> x;
        string y; cin >> y;
        y = y.substr(0, y.size() - 1);
        cout << x << " " << y << ";" << " #" << MAP[y] << '\n';
    }
    return 0;
}
