/**
 *    author:  Asif
 *    created: 29.03.2021 00:00:00
**/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int tc; cin >> tc;
    vector <int> vec(tc + 1, 0);
    tc--;
    while(tc--){
        int n; cin >> n;
        vec[n]++;
    }
    for(int i = 1; i < vec.size(); i++){
            if(vec[i] == 0) { 
                cout << i << '\n'; break;
            }
    }
    return 0;
}