/**
  *    author:  CodeBuster_007
  *    created: 21.01.2021 05:39:14      
* */
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int n, w, h; cin >> w >> h >> n;
        int t = w + h;
        int count = 1;
        if(n == 1) cout << "YES" << endl;
        else if (w%2 != 0 && h%2 != 0) cout << "NO" << endl;
        else{
            while(w%2 == 0){
                count *= 2;
                w /= 2;
            }
            while(h%2 == 0){
                count *= 2;
                h /= 2;
            }
            if(count >= n) cout << "YES" << endl;
            else cout << "NO" << endl;
            
        }
    }
 
    return 0;
}