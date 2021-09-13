/**
 *    author:  Asif
 *    created: 26.02.2021 21:52:16
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
    int n; cin >> n;
    int cnt = 0;
    while(n--){
        int x, y, z; cin >> x >> y >> z;
        if(x + y + z > 1) cnt++;
    }
    cout << cnt;
    
    return 0;
}