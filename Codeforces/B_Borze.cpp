/**
 *    author:  CodeBuster_007
 *    created: 18.02.2021 05:36:33
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
    string s; cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '.') cout << 0;
        if(s[i] == '-'){
            if(s[i+1] == '.') cout << 1;
            else cout << 2;
            i++;
        }
    }
    
    return 0;
}