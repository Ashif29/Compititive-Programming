/**
 *    author:  Asif
 *    created: 09.03.2021 01:27:15
**/
#include<bits/stdc++.h>
#define ll long long
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    string s; cin >> s;
    bool flag = false;
    
    for(int i = 0; i < s.length(); i++){
        int cnt = 0;
        for(int j = i; j < s.length(); j++){
            if(s[i] == s[j]){
                cnt++;
                if(cnt == 7){
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
            }
            else break;
        }
        if(flag) break;
    }
    if(!flag) cout << "NO" << endl;
    return 0;
}