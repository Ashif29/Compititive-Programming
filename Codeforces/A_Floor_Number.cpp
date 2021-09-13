/**
 *    author:  CodeBuster_007
 *    created: 18.01.2021 04:03:33  
**/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int n, x; cin >> n >> x;
        if(n < 3) cout << 1 << endl;
         else cout << ceil(((n - 2) / (x * 1.0))) + 1 << endl;
    }
    return 0;
}