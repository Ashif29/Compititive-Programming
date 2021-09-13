/**
 *    author:  Asif
 *    created: 27.02.2021 16:03:36
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
    int ans = 0;
    while(n--){
        string s; cin >> s;
        if(s == "X++" || s == "++X") ans++;
        else if(s == "--X" || s == "X--") ans--;
    }
    cout << ans << endl;
    
    return 0;
}