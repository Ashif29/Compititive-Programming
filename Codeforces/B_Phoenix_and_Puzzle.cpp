/**
 *    In the name of Allah (SWT).
 *    We're nothing and you're everything.
 *    Ya Ali!
 *
 *    author:  Asif
 *    created: 03.05.2021 10:58:28
**/

#include <bits/stdc++.h>
using namespace std;
bool isSquare(int n){
    int ans = sqrt(n);
    return ans * ans == n;
}
void busted(){
    int n; cin >> n;
    if(n % 2 == 0 && isSquare(n / 2)) cout << "YES\n";
    else if(n % 4 == 0 && isSquare(n / 4)) cout << "YES\n";
    else cout << "NO\n";
    return;
}
 
int32_t main(){
    int tc; cin >> tc;
    while(tc--){ 
        busted();
    }
    return 0;
}