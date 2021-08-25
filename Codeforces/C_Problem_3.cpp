/**
 *    author:  Asif
 *    created: 16.03.2021 13:28:37
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

int main()
{
    string s; cin >> s;
    s.erase(s.begin() + 0);
    // if(s.size() < 3) cout << s <<'\n';
    // else{
    //     for(int i = 0; i < s.size() - 2; i += 2){
    //         for(int j = i + 2; j < s.size(); j += 2){
    //             if(s[i] > s[j]) swap(s[i], s[j]);
    //         }
    //     }
    //     cout << s <<'\n';
    // }
    cout << s <<'\n';
    return 0;
}