/**
 *    author:  Asif
 *    created: 21.02.2021 04:58:34
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
        string s; cin >> s;
        int l = s.length();
        if(s[0] == ')' || s[l - 1] == '('){cout << "NO" << endl;}
        else if(l%2 != 0){cout << "NO" << endl;}
        else{cout << "YES" << endl;}
    }    
    return 0;
}