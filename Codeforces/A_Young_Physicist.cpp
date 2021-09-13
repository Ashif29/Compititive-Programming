#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int sum_xi = 0;
    int sum_yi = 0;
    int sum_zi = 0;
    while(n--){
        int xi; cin >> xi; sum_xi += xi;
        int yi; cin >> yi; sum_yi += yi;
        int zi; cin >> zi; sum_zi += zi;
    }
    if(sum_xi == 0 && sum_yi == 0 && sum_zi == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}