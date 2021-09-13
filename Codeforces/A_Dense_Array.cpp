/**
 *    author:  CodeBuster_007
 *    created: 16.02.2021 21:57:12
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
        int cnt = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++){
            int t1 = max(a[i], a[i+1]);
            int t2 = min(a[i], a[i+1]);
            while(t2 < t1){
                t2 = t2 * 2;
                if(t2 >= t1) break;
                cnt++;
            }
        }
        cout << cnt << endl;  
    }
    
    return 0;
}