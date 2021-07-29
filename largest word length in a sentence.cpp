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
    int n; cin >> n;
    cin.ignore();
    char a[n+1]; cin.getline(a,n);
    cin.ignore();
    int i = 0;
    int curr = 0;
    int prev = 0;
    while(a[i] != '\0')
    {
        i++;
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(curr > prev)
            {
                prev = curr;
            }
            curr = 0;
        }
        else
        {
            curr++;
        }
    }
    cout << prev << endl;
    return 0;
}