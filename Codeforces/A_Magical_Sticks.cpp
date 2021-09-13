/**
 *    author:  Asif
 *    created: 01.03.2021 17:11:47
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
        ll n; cin >> n;
        if(n % 2 == 0){
            cout << n / 2 << endl;
        }
        else{
            cout << ((n - 1) / 2) + 1 << endl;
        }
    }
    return 0;
}