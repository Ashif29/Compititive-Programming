/**
 *    author:  Asif
 *    created: 01.03.2021 11:43:11
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
    string s; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        for(int j = s.length(); j > i; j--){
            if(s[j] == s[i] && s[j] != '0' ){
                cnt++;
                s[j] = '0';
            }
        }
    }
    if((s.length() - cnt) % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
    
    return 0;
}