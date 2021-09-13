/**
 *    author:  Asif
 *    created: 23.02.2021 05:42:55
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n, m; cin >> n >> m;
        vector <int> vec;
        int i;
        int t = (n+m);
        while(t--){
            cin >> i;
            vec.pb(i);
        }
        sort(vec.begin(), vec.end());
        int cnt = 0;
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] == vec[i-1]) cnt++;
        }
        cout << cnt <<endl;

    }
    return 0;
}