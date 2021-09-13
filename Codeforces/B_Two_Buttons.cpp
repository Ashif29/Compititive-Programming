#include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        int n, m; cin >> n >> m;
        int ans = 0;
        if(n >= m) cout << (n - m) << endl;
        else{
            while(m > n){
                if((m % 2) != 0)  m += 1;
                else m /= 2;
                ans++;
            }
            cout << (ans += (n-m)) << endl;
        }
     
        return 0;
    }