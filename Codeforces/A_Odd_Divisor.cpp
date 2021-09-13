/**
  *    author:  CodeBuster_007
  *    created: 25.01.2021 00:45:32
* */
  
#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        long long  x; cin >> x;
        while(x > 1){
              if(x%2 == 1){
                  cout << "YES" << endl;
                  break;
              }
              x /= 2;
        }
        if(x == 1)cout << "NO" << endl;
    }
 
    return 0;
}