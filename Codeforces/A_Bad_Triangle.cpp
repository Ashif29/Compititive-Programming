/**
 *    author:  Asif
 *    created: 24.02.2021 17:45:31
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        int arr[n];
        bool flag = false;
        for(int i = 0; i < n; i++) cin >> arr[i];
        if(arr[0] + arr[1] <= arr[n-1]) cout << "1 2 " << n << endl;
        else cout << "-1" << endl;

    }
}