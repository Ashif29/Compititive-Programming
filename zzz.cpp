#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int k = 1;
        while(k <= n-i+1){
            cout << " ";
            k++;
        }
        // cout << k << '\n';
        for(int j = k; j <= n+1; j++){
            cout << "*";
        }
        cout <<'\n';
    }
    for(int i = 1; i <= n; i++){
        int k = 1;
        while(k <= n-i){
            cout << " ";
            k++;
        }
        for(int j = k; j <= n; j++){
            cout << "*";
        }
        cout <<'\n';
    }
    return 0;
}