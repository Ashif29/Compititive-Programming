/**
  *    author:  CodeBuster_007
  *    created: 25.01.2021 03:29:54
* */
  
#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        double n, d; cin >> n >> d;
        bool flag = true;
        if (d <= n) cout << "YES" << endl;
        else{
            int t = n;
            for(double i = t; i > 0; i--){
                if(ceil(d/(i+1))+i <= n){
                    cout << "YES" << endl;
                    flag = false;
                    break;
                } 
            }
            if(flag) cout << "NO" << endl;
        }
    }
 
    return 0;
}