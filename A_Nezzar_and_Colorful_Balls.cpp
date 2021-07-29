/**
  *    author:  CodeBuster_007
  *    created: 29.01.2021 16:29:32
* */
  
#include <bits/stdc++.h>

using namespace std;

int busted(int a[], int n){
    int c = 0;
    for(int i = 0; i < n; i++){
        int c2 = 1;
        while(a[i] == a[i+1] && i+1 < n){
            c2++;
            i++;
        }
        if(c < c2){
            c = c2;
        }
    }
    return c;
} 
 
int main(){
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << busted(a, n) << endl;
    }
 
    return 0;
}