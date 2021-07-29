#include <iostream>
using namespace std;
typedef long long ll;
void busted(int t_c){
    int n; scanf("%d", &n);
    int x; scanf("%d", &x);
    int ma = -1;
    while(n--){
        int m; scanf("%d", &m);
        int k; scanf("%d", &k);
        if(m <= x) ma = max(ma, k);
    }
    printf("%d\n", ma);
    return;
}
int main(){
    int tc; scanf("%d", &tc);
    while(tc--){
        busted(tc);
    }
    return 0;
}