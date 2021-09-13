/**
  *    author:  CodeBuster_007
  *    created: 21.01.2021 13:30:15     
* */
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int x; cin >> x;
        if(x >= 4 && x%4 == 0) cout << "YES"<< endl;
        else cout << "NO"<< endl;
        
    }
 
    return 0;
}