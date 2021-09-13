/**
 *    author:  CodeBuster_007
 *    created: 15.02.2021 17:23:57
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
    int temp = 0;
    int mx = imin;
    while(tc--){
        int a, b; cin >> a >> b;
        temp = abs(temp - a) + b;
        mx = max(mx, temp);
    }
    cout << mx << endl;
    return 0;
}