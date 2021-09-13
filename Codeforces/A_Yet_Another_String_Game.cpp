/**
 *    author:  CodeBuster_007
 *    created: 20.02.2021 03:31:23
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
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' && i%2 == 0) cout << "b";
            else if(i%2 == 0) cout << "a";
            else{
                if(s[i] == 'z') cout << "y";
                else cout << "z";
            }
        }
        cout << endl;
    }
    return 0;
}