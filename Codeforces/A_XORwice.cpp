/**
 *    author:  Asif
 *    created: 05.03.2021 11:35:19
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
        a ^= b;
        cout << a << endl;
    }
    return 0;
}