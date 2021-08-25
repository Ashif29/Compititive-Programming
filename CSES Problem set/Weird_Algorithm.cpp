/**
 *    author:  Asif
 *    created: 28.03.2021 14:23:25
**/
#include <bits/stdc++.h>
using namespace std;
#define imin INT_MIN
typedef long long ll;
int main(){
    ll n; cin >> n;
    while(true){
        cout << n << " ";
        if(n  == 1) break;
        if(n % 2 == 0) n /= 2;
        else n = (3 * n) + 1;
    }
    cout << '\n';
    return 0;
}
