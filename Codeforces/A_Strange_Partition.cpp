/**
 *    author:  CodeBuster_007
 *    created: 20.02.2021 18:14:23
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
        int a, b; cin >> a >> b;
        ll sum = 0, m = 0;
        while(a--){
            ll i;
            cin >> i;
            sum += i;
            m += ceill(i/(b*1.0));
        }
        ll n = (sum + b - 1) / b;
        cout << n << " " << m << endl;
    }    
    return 0;
}