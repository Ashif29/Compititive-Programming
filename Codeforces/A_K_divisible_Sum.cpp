/**
  *    author:  CodeBuster_007
  *    created: 12.02.2021 01:32:35
 **/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;
        
        
        if(n == 1) cout << k << endl;
        else if(n > k){
            if(n % k == 0) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else if(k % n == 0) cout << k/n << endl;
        else cout <<(k / n + 1) << endl;
    }
    
    return 0;
}