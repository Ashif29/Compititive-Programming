/**
 *    author:  Asif
 *    created: 08.03.2021 23:27:15
**/
#include<bits/stdc++.h>
#define ll long long
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--){
        ll x, y, k; cin >> x >> y >> k;
        ll tem = (k + (k * y) - 1);
        ll ans = tem / (x - 1);
        if(tem % (x - 1)) ans++;
        cout << ans + k << endl;
    }
    return 0;
}