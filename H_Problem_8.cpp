/**
 *    author:  Asif
 *    created: 17.03.2021 15:39:45
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
    // string x = "Hajj";
    // string y = "Umrah";
    int cnt = 1;
    while (1){
        string s; cin >> s;
        if(s[0] == '*') break;
        if(s == "Hajj") cout << "Case " << cnt << ": Hajj-e-Akbar" << '\n';
        if(s == "Umrah") cout << "Case " << cnt << ": Hajj-e-Asghar" << '\n';
        cnt++;
    }
    return 0;
}