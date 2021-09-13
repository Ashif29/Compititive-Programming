/**
  *    author:  CodeBuster_007
  *    created: 11.02.2021 14:32:23
* */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2; cin >> str1 >> str2;
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0; i < str1.length(); i++)
    {
        if(str1[i] >= 65 && str1[i] <= 90){
            str1[i] = str1[i] + 32;
        }
        
        if(str2[i] >= 65 && str2[i] <= 90){
            str2[i] = str2[i] + 32;
        }
    }
    for(int i=0; i < str1.length(); i++){
        if(str1[i] < str2[i]){
            cout << -1 << endl;
            return 0;
        }
        else if(str1[i] > str2[i]){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    
    return 0;
}