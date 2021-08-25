#include<stdio.h>
int main(){
    int tc;
    scanf("%d", &tc);
    while(tc--){
       int n;
       scanf("%d", &n);
       printf("%d\n", (n + 1) / 10);
    }
    return 0;
}