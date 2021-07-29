/**
 *    author:  Asif
 *    created: 14.03.2021 15:51:00
**/
#include<bits/stdc++.h>
#define ll long long
#define inf 9223372036854775807
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
using namespace std;

void busted(int n){
    vector<int> v1(n+1, 1);
    vector<int> v2;
    v1[1] = 0;
    v1[0] = 0;
    for(int i = 2; i <= n; i++){
        if(v1[i]){
            v2.push_back(i);
            for(int j = i*i; j <= n; j += i)
                v1[j] = 0;
        }
    }
    int c = 0;
    for(int i = 6; i <= n; i++){
        int cnt = 0;
        for(int j = 0; j < v2.size(); j++){
            if(i % v2[j] == 0) cnt++;
        }
        if(cnt == 2) c++;
    }
    cout << c << endl;
    return;
}
int main (){
    int n; cin >> n;
    busted(n);
    return 0;
}