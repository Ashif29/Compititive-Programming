/**
 *    author:  CodeBuster_007
 *    created: 20.01.2021 10:18:19       
 * */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test; cin >> test;
    while(test--){
        int n, d; cin >> n >> d;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(a[j] < a[i]) swap( a[j], a[i]);
            }
        }
        if(a[n-1] <= d) cout << "YES" << endl;
        else{
            cout << (a[0] + a[1] <= d? "YES" : "NO");
            cout << endl;
        }
        
    }

    return 0;
}