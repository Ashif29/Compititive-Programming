/**
 *    author:  Asif
 *    created: 29.03.2021 00:00:00
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int m = 1;
    int cnt = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) cnt++;
        else cnt = 1;
        m = max(m, cnt);
    }
    cout << m << '\n';
    return 0;
}