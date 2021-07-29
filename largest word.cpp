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
    int st = 0, prev_st = 0;
    while(1)
    {
        
        if(a[i] == ' ' || a[i] == '\0')
        {
            if(curr > prev)
            {
                prev = curr;
                prev_st = st;
            }
            curr = 0;
            st = i+1;
        }
        else
            curr++;
        if(a[i] == '\0') 
            break;
        i++;
    }
    cout << prev << endl;
    for(int i=0; i<prev; i++){
        cout << a[i+prev_st];
    }
    return 0;
}