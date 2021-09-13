/**
 *    author:  CodeBuster_007
 *    created: 13.02.2021 16:51:35
**/
 
#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN

using namespace std;

void busted(int tc){
    int a, b; cin >> a >> b;
    int m = imax;
    for(int i = 0; i * i <= a; i++){
        int cnt = i;
        int t1 = a;
        int t2 = b + i;
        if(t2 == 1) continue;
        while(t1){
            t1 /= t2;
            cnt++;
        }
        m = min(cnt, m);
    }
    cout << m << endl;
}

int  main(){
    int tc; cin >> tc;
    while(tc--){
        busted(tc);
    }
    return 0;
}