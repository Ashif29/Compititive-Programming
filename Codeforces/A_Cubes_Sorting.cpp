/**
 *    author:  Asif
 *    created: 07.03.2021 13:53:15
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
        bool flag = true;;
        vector <int> vec;
        while(n--){
            int x; cin >> x;
            vec.pb(x);
        }
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] >= vec[i-1]){
                flag = false;
                break;
            }
        }
        if(!flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}