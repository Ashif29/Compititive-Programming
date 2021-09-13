/**
 *    author:  Asif
 *    created: 06.03.2021 02:45:23
**/
#include<bits/stdc++.h>
#define ll long long int
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--){
        ll a, b, c; cin >> a >> b >> c;
        a = (a + b + c) - 2;
        cout << a << '\n';
    }
    return 0;
}