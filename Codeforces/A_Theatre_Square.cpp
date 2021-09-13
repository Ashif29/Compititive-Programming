/**
  *    author:  CodeBuster_007
  *    created: 10.02.2021 21:12:56
* */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a, ans; cin >> n >> m >> a;
    ans = ceil(m/(a*1.0)) * ceil(n/(a*1.0));
    cout << ans << endl;
    return 0;
}