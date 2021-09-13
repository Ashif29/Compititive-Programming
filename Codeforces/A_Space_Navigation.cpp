/**
  *    author:  CodeBuster_007
  *    created: 11.02.2021 23:53:34
 **/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        int y; cin >> y;
        int a = 0;
        int b = 0;
        string s; cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(y > 0){
                if(s[i] == 'U') a++;
            }
            if(y < 0){
                if(s[i] == 'D') a--;
            }
            if(a == y) break;
        }
        for(int i = 0; i < s.length(); i++){
            if(x > 0){
                if(s[i] == 'R') b++;
            }
            if(x < 0){
                if(s[i] == 'L') b--;
            }
            if(b == x) break;
        }
        if(b == x && a == y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}