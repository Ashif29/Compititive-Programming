#include <bits/stdc++.h>
using namespace std;

void Divisors_Count(){
    int x; cin >> x;
    int divisors = 0;
    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            if(x / i == i){
                divisors++;
            }
            else{
                divisors += 2;
            }
        }
    }
    cout << divisors << '\n';
    return;
}

int32_t main(){
    int n; cin >> n;
    while(n--){
        Divisors_Count();
    }
    return 0;
}