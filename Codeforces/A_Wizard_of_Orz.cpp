/**
 *    author:  CodeBuster_007
 *    created: 20.02.2021 14:48:23
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
        for(int i = 0; i < n; i++){
            if(i == 0){ cout << 9; continue;}
            cout <<(7 + i) % 10;
        }
        cout << endl;
    }    
    return 0;
}