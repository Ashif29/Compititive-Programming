/**
 *    author:  Asif
 *    created: 14.03.2021 19:07:00
**/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int limit = sqrt(n + 1);
    if(n == 1) return false;
    for(int i = 2; i <= limit; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main (){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if(isPrime(n)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}