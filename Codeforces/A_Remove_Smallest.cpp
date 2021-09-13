/**
 *    author:  CodeBuster_007
 *    created: 14.02.2021 04:52:33
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
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << "YES" << endl;
        return;
    }
    sort(a, a + n);
    for(int i = 1; i < n; i++){
        int temp = (a[i] - a[i-1]);
        if(abs(temp) > 1 ){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int  main(){
    int tc; cin >> tc;
    while(tc--){
        busted(tc);
    }
    return 0;
}