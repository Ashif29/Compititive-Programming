/**
 *    author:  CodeBuster_007
 *    created: 17.02.2021 19:33:47
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
        if(a>b){
            if((a-b)%2 == 0) cout << 1 << endl;
            else cout<< 2 << endl;          
        }
        else if(a<b){
            if((b-a)%2 == 0) cout << 2 << endl;
            else cout<< 1 << endl;          
        }
        else cout<< 0 << endl;
    }
    return 0;
}