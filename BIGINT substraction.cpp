// In the name of Allah (SWT).
// We're nothing and you're everything.
// Ya Ali!
 
/**
 *    author:  Asif
 *    created: 00.00.0000 00:00:00
**/
#include <bits/stdc++.h>
using namespace std;
bool isSmallar(string str1, string str2){
    if(str1.length() > str2.length())
        return false;
    else if(str1.length() < str2.length())
        return true;
    else{
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] < str2[i]) 
                return true;
        }
    }
    return false;
}
string find_Diff(string str1, string str2){
    if(isSmallar(str1, str2))
        swap(str1,str2);
        string str = "";
    int diff = str1.length() - str2.length();
    int carry = 0;
    for(int i = str2.length() - 1; i >= 0; i--){
        int sub = (str1[i + diff] - '0') - (str2[i] - '0') - carry;
        if(sub < 0){
            sub += 10;
            carry = 1;
        }
        else carry = 0;
        str.push_back(sub + '0');
    }
    for(int i = str1.length() - str2.length() - 1; i >= 0; i--){
        if(str1[i] == '0' && carry){
            str.push_back('9');
            continue;
        }
        int sub = (str1[i] - '0') - carry;
        if (i > 0 || sub > 0)
            str.push_back(sub + '0');
        carry = 0;
    }
    reverse(str.begin(), str.end());
    return str;
    
}
int32_t main(){
    string str1; cin >> str1;
    string str2; cin >> str2;
    cout << find_Diff(str1, str2) << endl;
    return 0;
}