/**
 *    author:  Asif
 *    created: 07.03.2021 23:15:15
**/
#include<bits/stdc++.h>
#define ll long long int
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;
        int l = s.length();
        bool r = false;
        bool b = false;
        if(l == 1){
            if(s[0] % 2 == 0) cout << "2" << '\n';
            else cout << "1" << '\n';
        }
       else if(l % 2 == 0){
           for(int i = 1; i < l; i += 2){
                if(s[i] % 2 == 0){
                    b = true;
                    break;
                }
           }
           if(b) cout << "2" << '\n';
           else cout << "1" << '\n';
       }
       else{
           for(int i = 0; i < l; i += 2){
                if(s[i] % 2 != 0){
                    r = true;
                    break;
                }
           }
           if(r) cout << "1" << '\n';
           else cout << "2" << '\n';
       }
    }
    return 0;
}