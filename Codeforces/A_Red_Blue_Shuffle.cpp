/**
 *    author:  Asif
 *    created: 22.02.2021 04:17:36
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
        string r, b; cin >> r >> b;
        int red = 0, blue = 0;
        for(int i = 0; i < n; i++){
            if(r[i] > b[i]) red++;
            else if(r[i] < b[i]) blue++;
        }
        if(red == blue){cout << "EQUAL" << endl;}
        else{
            if(red > blue) cout << "RED" << endl;
            else cout << "BLUE" << endl;
        }
    }    
    return 0;
}