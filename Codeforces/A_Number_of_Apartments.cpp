/**
 *    author:  Asif
 *    created: 05.03.2021 17:09:34
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
        int n; cin >> n;
        
        if(n < 3 || n == 4) 
            cout << "-1" << '\n';
        else if(n % 3 == 0)
            cout << n / 3 << " " << 0 << " " << 0 << '\n';
        else if(n % 3 == 1)
            cout << n / 3 - 2 << " " << 0 << " " << 1 << '\n';
        else
            cout << n / 3 - 1 << " " << 1 << " " << 0 << '\n';
    }
    return 0;
}