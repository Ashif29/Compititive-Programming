/**
 *    author:  Asif
 *    created: 23.02.2021 04:26:17
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

signed main()
{
    ll tc; cin >> tc;
    while(tc--)
    {
        ll a, b, c; cin >> a >> b >> c;
        ll sum = a + b + c;
        ll t = sum / 9;
        if(sum%9 == 0 && a>=t && b>=t && c>=t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}