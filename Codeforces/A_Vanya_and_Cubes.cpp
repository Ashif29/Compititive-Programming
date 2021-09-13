/**
 *    author:  Asif
 *    created: 28.02.2021 15:49:31
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
    int n; cin >> n;
    int ans = 0;
    int i = 1;
    int tem = 0;
    int cnt = 0;
    while(tem <= n){
        ans += i;
        i++;
        tem += ans;
        ++cnt;
    }
    cout << cnt-1 << endl;
    
    return 0;
}