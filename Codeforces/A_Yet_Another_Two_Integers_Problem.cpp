/**
 *    author:  CodeBuster_007
 *    created: 14.02.2021 03:56:57
**/
 
#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN

using namespace std;

void busted(ll tc){
    int a, b; cin >> a >> b;
    cout << ((abs(a - b) + 9) / 10) << endl;
}

int  main(){
    ll tc; cin >> tc;
    while(tc--){
        busted(tc);
    }
    return 0;
}