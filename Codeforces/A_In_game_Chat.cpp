/**
 *    author:  Asif
 *    created: 22.02.2021 03:28:56
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
        string s; cin >> s;
        int i = n - 1;
        int cnt = 0;
        while(s[i] == ')'){
            cnt++;
            i--;
        }
        if((n - cnt) >= cnt){cout << "No" << endl;}
        else{cout << "Yes" << endl;}
    }    
    return 0;
}