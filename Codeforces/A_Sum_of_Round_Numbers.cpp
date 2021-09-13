/**
 *    author:  Asif
 *    created: 01.03.2021 22:23:17
**/
#include<bits/stdc++.h>
#define ll long long int
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
ll a[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};

int main()
{
    int tc; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        vector <int> vec;
        int cnt = 0;
        while(n != 0){
            int tem = n % 10;
            vec.pb(tem);
            if(tem){
                cnt++;
            }
            n /= 10;
        }
        cout << cnt << endl;
        for(int i = 0; i < vec.size(); i++){
            if(vec[i] * a[i]) cout << vec[i] * a[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}