/**
 *    author:  Asif
 *    created: 25.02.2021 03:05:32
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int x, y; cin >> x >> y;
        if(x == y) cout << (x+y) << endl;
        else cout << max(x, y) * 2 - 1  << endl;
    }
    return 0;
}