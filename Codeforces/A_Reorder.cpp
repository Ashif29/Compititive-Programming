/**
  *    author:  CodeBuster_007
  *    created: 20.01.2021 11:00:37       
* */
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int n, m; cin >> n >> m;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum == m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}