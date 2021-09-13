/**
  *    author:  CodeBuster_007
  *    created: 21.01.2021 03:56:47      
* */
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a[n];
        int sum = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] == 1) c1++;
            else c2++;
        }
        if(sum % 2 != 0) cout << "NO" << endl;
        else{
            if((c2 % 2 != 0) && (c1 == 0))
                cout << "NO" << endl;
            else if((c2 % 2 != 0) && (c1 % 2 != 0))
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
 
    return 0;
}