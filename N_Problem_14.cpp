/**
 *    author:  Asif
 *    created: 19.03.2021 14:23:32
**/
#include <bits/stdc++.h>
using namespace std;
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;

int main(){
    int tc; scanf("%d",&tc);
    while(tc--){
        int n; scanf("%d",&n);
        int k; scanf("%d",&k); k--;
        int a[n];
        int m = imin;
        int cnt[100010] = {0};
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            m = max(m, a[i]);
            cnt[a[i]]++;
        }
        int temp = a[k];
        for(int i = 1; i <= m; i++){
            cnt[i] += cnt[i-1];
        }
        int output[n];
        for(int i = n-1; i >= 0; i--){
            output[--cnt[a[i]]] = a[i];
        }
        for(int i = 0; i < n; i++){
            if(output[i] == temp){
                printf("%d\n", ++i);
                break;
            }
        }
    }
    return 0;
}