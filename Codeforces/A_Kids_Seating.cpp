/**
 *    author:  Asif
 *    created: 03.03.2021 16:43:17
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
        int n; cin >> n;
        int ans = 4 * n;
        while(n--)
        {
            cout << ans << " ";
            ans -= 2;
        }
        cout << '\n';
    }
    return 0;
}