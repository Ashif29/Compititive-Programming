#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    int n; cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++){

        if(__gcd(i, n) == 1)
            count++;
    }
    cout << count << '\n';
    return 0;
}