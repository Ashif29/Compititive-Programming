/**
 *    author:  CodeBuster_007
 *    created: 16.02.2021 14:39:56
**/

#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n; cin >> n;
    if(n % 2 == 0) cout << 4 << " " << n - 4 << endl;
    else cout << 9 << " " << n - 9 << endl;
    return 0;
}