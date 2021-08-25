/**
 *    author:  Asif
 *    created: 13.04.2021 22:10:12
**/
#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
 
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
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;
 
/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long| 18,446,744,073,709,551,615 (10^20)
 * |2.| LLONG_MAX  | Maximum value long long         | 9,223,372,036,854,775,807 (10^19)
 * |3.| LLONG_MIN  | Minimum value long long         |-9,223,372,036,854,775,808 -1*(10^19)
 * |4.| INT_MAX    | Maximum value int               | 2,147,483,647 (10^10)
 * |5.| INT_MIN    | Minimum value int               |-2,147,483,648 (10^10)
 */
 
void busted(int tc){
    int n; cin >> n;
    int x1, y1, x2, y2;
    char arr[n][n];
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == '*' && flag){
                x1 = i;
                y1 = j;
                flag = false;
            }
            if(arr[i][j] == '*' && !flag){
                x2 = i;
                y2 = j;
            }
        }
    }
    if(y1 == y2){
        if(y1 + 1 < n){
            arr[x1][y1 + 1] = '*';
            arr[x2][y2 + 1] = '*';
        }
        else{
            arr[x1][y1 - 1] = '*';
            arr[x2][y2 - 1] = '*';
        }
    }
    else if(x1 == x2){
        if(x1 + 1 < n){
            arr[x1 + 1][y1] = '*';
            arr[x2 + 1][y2] = '*';
        }
        else{
            arr[x1 - 1][y1] = '*';
            arr[x2 - 1][y2] = '*';
        }
    }
    else{
        arr[x2][y1] = '*';
        arr[x1][y2] = '*';
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        busted(tc);
    }
    return 0;
}