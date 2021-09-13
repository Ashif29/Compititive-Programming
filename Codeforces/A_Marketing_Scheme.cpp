/**
 *    author:  Asif
 *    created: 04.03.2021 01:06:37
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
        int l, r; cin >> l >> r;
        if(l * 2 > r) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}