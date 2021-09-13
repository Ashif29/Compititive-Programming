/**
  *    author:  CodeBuster_007
  *    created: 25.01.2021 00:49:23
* */
  
#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int test; cin >> test;
    while(test--){
        int year; cin >> year;
        if (year%2020 <= (year/2020)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
 
    return 0;
}