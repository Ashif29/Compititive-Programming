#include <bits/stdc++.h>

using namespace std;

int main(){
    int a; cin >> a;
    int b; cin >> b;
    int sum = a;
    while(a >= b){
        sum += (a/b);
        a = (a/b) + (a%b);
    } cout << sum << endl;
    
    return 0;
}