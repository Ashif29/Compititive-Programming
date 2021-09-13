/**
  *    author:  CodeBuster_007
  *    created: 09.02.2021 06:22:11
* */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.14159


int fact(int n)
{
     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
int gcd(int n1, int n2)
{
    int gcd = 0;
    for(int i=1; i <= n1 && i <= n2; ++i){
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int a, b; cin >> a >> b;
    cout << fact(min(a, b)) << endl;
    return 0;
}