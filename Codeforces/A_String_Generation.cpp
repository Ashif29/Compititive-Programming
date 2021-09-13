/**
 *    author:  Asif
 *    created: 23.02.2021 05:12:34
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
        int n, k; cin >> n >> k;
        while(k--){
            cout << "a";
            n--;
        }
        char x = 'c';
        int cnt = 0;
        while(n--){
            cout << x;
            x--;
            cnt++;
            if(cnt == 3){
                cnt = 0;
                x = 'c';
            }
        }
        cout << endl;

    }
    return 0;
}