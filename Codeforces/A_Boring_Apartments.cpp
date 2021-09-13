#include <bits/stdc++.h>

using namespace std;
int arr[48] = {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
int main(){
    int test; cin >> test;
    while(test--){
        int a; cin >> a;
        int ans=0;
        for (int i=0; i<40; i++){
            if(arr[i] == a)
                ans = i+1;
        }
        if((ans%4) == 0) cout << (ans/4)*10 << endl;
        if((ans%4) == 1) cout << (ans/4)*10 + 1 << endl;
        if((ans%4) == 2) cout << (ans/4)*10 + 3 << endl;
        if((ans%4) == 3) cout << (ans/4)*10 + 6 << endl;

    }
    return 0;
}