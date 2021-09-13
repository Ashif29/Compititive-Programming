/**
 *    author:  CodeBuster_007
 *    created: 20.02.2021 02:54:54
**/

#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN

using namespace std;

int  main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        ll sum = 0, req = 0;
        int cnt = 0;
        for(int i = 0; i < n; ++i){
            sum += a[i];
            req += i;
            if(sum < req) cnt ++;
        }
        if(cnt) cout << "NO" <<'\n';
        else cout << "YES" <<'\n';
    }
    return 0;
}