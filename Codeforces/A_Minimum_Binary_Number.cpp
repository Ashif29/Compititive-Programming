/**
  *    author:  CodeBuster_007
  *    created: 09.02.2021 05:00:43
* */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    string s; cin >> s;
    if(n == 1) cout << s << endl;
    else{
        cout << 1;
        for(int i = 0; i < n; i++) {if(s[i] == '0') cnt++;}
        for(int i = 1; i <= cnt; i++) cout << 0;
        cout << endl;
    }
    return 0;
}