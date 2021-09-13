/**
 *    author:  Asif
 *    created: 28.02.2021 10:38:31
**/
#include<bits/stdc++.h>
#define ll long long int
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) ans++;
    }
    cout << ans << endl;
    
    return 0;
}