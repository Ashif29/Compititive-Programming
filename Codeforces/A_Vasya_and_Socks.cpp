/**
 *    author:  CodeBuster_007
 *    created: 18.02.2021 15:54:34
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
    int n, m; cin >> n >> m;
    if(n == 1){ cout << 1 << endl; return 0;}
    cout << n+((n-1)/(m-1)) << endl;
    return 0;
}