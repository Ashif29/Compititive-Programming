/**
 *    author:  Asif
 *    created: 17.03.2021 04:09:25
**/
#include <bits/stdc++.h>
using namespace std;
 
// #define INF (int)1e9
// #define PI 3.1415926535897932384626433832795
// #define MOD 1000000007
// #define pb push_back
// #define imax INT_MAX
#define imin INT_MIN
 
// typedef long long ll;
// typedef unsigned long long ull;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<ll> vl;
// typedef vector<vl> vvl;
// typedef vector<char> vc;
// typedef vector<vc> vvc;

int main(){
    int a ; //cin >> a;
    int b; //cin >> b;
    while(scanf("%d%d",&a,&b) != EOF){
        if(b < a) swap(a, b);
        int m = imin;
        for(int i = a; i <= b; i++){
            int tem = i;
            int cnt = 1;
            while(tem >= 2){
                if(tem % 2 == 0){
                    tem /= 2;
                    cnt++;
                }
                else{
                    tem = 3 * tem + 1;
                    cnt++;
                }
            }
            m = max(m, cnt);
        }
        cout << a << " " << b << " " << m <<'\n';
    }
    return 0;
}