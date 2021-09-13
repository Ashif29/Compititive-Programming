/**
 *    author:  Asif
 *    created: 07.03.2021 12:25:31
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
        int n, k; cin >> n >> k;
        vector <int> vec;
        while(n--){
            int x; cin >> x;
            vec.pb(x);
        }
        int ans = 0;
        sort(vec.begin(), vec.end());
        for(int i = 1; i < vec.size(); i++)
            ans += (k - vec[i]) / vec[0];
        cout << ans << '\n';
    }
    return 0;
}