/**
 *    author:  CodeBuster_007
 *    created: 20.01.2021 12:27:22      
**/
#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2 ;
        int ans = abs(x2-x1) + abs(y2-y1);
        if(x1 == x2 || y1 == y2) cout << ans << endl;
        else cout << ans + 2 << endl;
    }

    return 0;
}