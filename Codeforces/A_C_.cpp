/**
 *    author:  Asif
 *    created: 02.03.2021 17:41:54
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
        int a, b, n; cin >> a >> b >> n;
        int cnt = 0;
        while(max(a,b) <= n){
            if(a > b) b += a;
            else a += b;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}