/**
 *    author:  Asif
 *    created: 14.03.2021 14:55:00
**/
#include<bits/stdc++.h>
#define ll long long
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main (){
    int tc; cin >> tc;
    while(tc--){
        int n, m, k; cin >> n >> m >> k;
        if(m <= (n / k)) cout << m << endl;
        else{
            int tem = (m - (n / k)) / (k - 1);
            int ans = (m - (n / k)) % (k - 1);
            if(ans != 0) tem++;
            cout << (n / k) - tem << endl;
        }
    }
    return 0;

}