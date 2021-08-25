/** In the name of Allah (SWT).
 *
 *    author:  Asif
 *    created: 00.00.2021 00:00:00
**/
  
#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int n, a, b; cin >> n >> a >> b;
    cout << n - max(a + 1, n - b) + 1 << endl;
 
    return 0;
}