/**
 *    author:  CodeBuster_007
 *    created: 18.02.2021 05:20:45
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
    int n, t; cin >> n >> t;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    while(t--){
        int i=0;
        while(i<n-1){
            if(s[i+1] == 'G'){
                swap(s[i], s[i+1]);
                i++;
            }
            i++;
        }
    }
    for(int i=0; i<n; i++) cout << s[i];
    
    return 0;
}