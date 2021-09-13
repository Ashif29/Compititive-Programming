/**
 *    author:  Asif
 *    created: 23.02.2021 04:44:26
**/
#include<bits/stdc++.h>
#define ll long long int
#define inf 1e18
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
signed main()
{
    ll tc; cin >> tc;
    while(tc--)
    {
        ll p; cin >> p;
        ll m = 9223372036854775807;
        for(int i = 1; i <= 3; i++)
        {
            ll a; cin >> a;
            ll ans = (p + a - 1) / a * a;
            m = min(m, ans);
        }
        cout << m - p << endl;
    }
    return 0;
}