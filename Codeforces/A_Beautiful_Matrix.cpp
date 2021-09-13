/**
 *    author:  CodeBuster_007
 *    created: 17.02.2021 14:19:17
**/

#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN

using namespace std;

int  main(){
    int a[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                cout << abs(i-2) + abs(j-2) << endl;
                return 0;
            }
        }
    }
    return 0;
}