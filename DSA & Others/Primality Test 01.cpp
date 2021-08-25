/**
 *    author:  Asif
 *    created: 14.03.2021 14:55:00
**/
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n == 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main (){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if(isPrime(n)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    return 0;
}