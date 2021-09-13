/**
  *    author:  CodeBuster_007
  *    created: 11.02.2021 16:21:32
* */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int b[n+2];
    for(int i = 0; i < n; i++) cin >> a[i];
    int k = 0, i = 0, j=n-1;
    while(k < n){
        if(a[i] >= a[j]){
            b[k] = a[i];
            i++;
        }
        else if(a[i] <= a[j]){
            b[k] = a[j];
            j--;
        }
        k++;
    }
    b[n] = 0;
    b[n+1] = 0;
    int s = 0, d = 0;
    for(int i = 0; i < n; i = i+2){
        s += b[i];
        d += b[i+1];
    }
    cout << s << " " << d << endl;
    
    return 0;
}