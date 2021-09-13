/**
 *    author:  CodeBuster_007
 *    created: 18.02.2021 14:00:43
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
    int n; cin >> n;
    for(int i = n+1; i<=9012 ; i++){
        int a = i%10;
        int b = (i/10)%10;
        int c = (i/100)%10;
        int d = (i/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){cout << i << endl; break;} 
    }
    return 0;
}