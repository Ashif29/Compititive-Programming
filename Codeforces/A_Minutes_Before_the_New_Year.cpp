/**
 *    author:  Asif
 *    created: 01.03.2021 14:25:11
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
    int tc; cin >> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        cout << (24 - a) * 60 - b << endl;
    }
    return 0;
}