/**
  *    author:  CodeBuster_007
  *    created: 10.02.2021 15:59:34
* */

#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
     return (n==0) || (n==1) ? 1 : n * fact(n-1);
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
    string str; cin >> str;
    int cnt = 0;
    int c = 1;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == '0')
        {
            c--;
            break;
        }
    }
    if(c)
    {
        for(int i=1; str[i] != '\0'; i++) cout << str[i];
        return 0;
    }
    for(int i=0; str[i] != '\0'; i++)
    {
        if(cnt == 0 && str[i] == '0')
        {
            cnt++;
            continue;
        }
        cout << str[i];
    }
    
    return 0;
}