/**
 *    author:  Asif
 *    created: 05.03.2021 10:28:14
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
        int cnt = 0;
        while(1){
            int a, b; cin >> a >> b;
            cout << -b << " " << a << " ";
            cnt += 2;
            if(cnt == n){
                break;
            }
        }
        cout << endl;
    }
    return 0;
}