/**
 *    author:  Asif
 *    created: 21.02.2021 04:57:34
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

int  main()
{
    int tc; cin >> tc;
    char a[tc+1]; cin >> a;
    int i = 0;
    bool flag = 1;
    while(i < tc)
    {
        if(a[i] != a[tc - 1 - i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}