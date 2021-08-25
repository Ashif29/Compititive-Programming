#include <bits/stdc++.h>
using namespace std;
namespace asif{
    int val = 50;
    int getVal(){
        return val * 10;
    }
}
int main(){
    int val = 20;
    cout << val << endl;
    

    cout << asif :: val << endl;

    cout << asif :: getVal() << endl;
    return 0;
}
