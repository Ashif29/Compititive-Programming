/**
 *    author:  Asif
 *    created: 01.03.2021 12:50:23
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
        cout << ((a%b) == 0? 0 : b - a%b) << endl;
    }
    return 0;
}