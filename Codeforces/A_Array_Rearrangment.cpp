/**
 *    author:  Asif
 *    created: 03.03.2021 18:23:14
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
        int n, x; cin >> n >> x;
        int a[n], b[n];
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater <int>());
        for(int i = 0; i < n; i++){
            if(a[i] + b[i] > x){
                flag = true;
                break;
            }
        }
        if(flag) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
    return 0;
}