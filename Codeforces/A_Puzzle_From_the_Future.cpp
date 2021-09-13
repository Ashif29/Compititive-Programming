/**
 *    author:  CodeBuster_007
 *    created: 20.02.2021 05:14:26
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
        int temp = 199;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(temp  == 2){ cout << 0; temp = 1;}
                else{ cout << 1; temp = 2;}
            }
            else{
                if(temp == 1){ cout << 0; temp = 0;}
                else{ cout << 1; temp = 1;}
            }
        }
        cout << endl;
    }
    return 0;
}