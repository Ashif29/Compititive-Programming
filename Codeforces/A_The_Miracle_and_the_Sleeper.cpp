/**   In the name of Allah (SWT).
 *
 *    author:  Asif
 *
**/
#include <bits/stdc++.h>
using namespace std;
 
typedef    long long                       ll;

#define    Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 
void busted(){
    int l, r; cin >> l >> r;
    ll x = r / 2 + 1;
    cout << (x > l ? r % x : r % l) << '\n';
    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}