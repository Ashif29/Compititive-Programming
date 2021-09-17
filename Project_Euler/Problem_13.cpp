// Large sum

// In the name of Allah (SWT).
/**
 *    author:  Asif
**/
#include <bits/stdc++.h>
using namespace std;
string ans = ""; 
void find_sum(string str1,string str2){
    str1 = ans;
    if(str1.size() < str2.size()) swap(str1, str2);
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    string str = "";
    int carry = 0;
    for(int i = 0; i < str2.size(); i++){
        int x = (str1[i] - '0') + (str2[i] - '0') + carry;
        str.push_back( x % 10 + '0');
        carry = x / 10;
    }
    for(int i = str2.size(); i < str1.size(); i++){
        int x = str1[i] - '0' + carry;
        str.push_back( x % 10 + '0');
        carry = x / 10;
    }
    if(carry) str.push_back(carry + '0');
    ans = str;

}

int32_t main(){
    string str1; cin >> str1;
    ans = str1;
    string str2;
    while( cin >> str2){
        find_sum(str1, str2);
    }
    for(int i = 0; i < 10; i++){
        cout << ans[i];
    }
    return 0;
}