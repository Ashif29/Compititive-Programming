/**
 *    author:  Asif
 *    created: 18.03.2021 00:42:27
**/
#include <iostream>
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
    int n;
    while(cin >> n){
        int tem = n;
        int cnt = 0;
        while(tem >= 3){
            tem  -= 2; cnt++;
        }
        if(n % 2 == 0){
            int ans = n + cnt + 1;
            cout << ans << '\n';
        }
        else{
            int ans = n + cnt;
            cout << ans << '\n';
        }
    }
}