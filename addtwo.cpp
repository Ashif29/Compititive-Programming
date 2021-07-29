#include<iostream>
using namespace std;
int compare(int a, int b, int c, int d){
    int ans = 0;
    if(a < b && a < c && a < d){
        ans = b+c+d;
    }
    if(b < a && b < c && b < d){
        ans = a+c+d;
    }
    if(c < b && c < c && c < d){
        ans = b+a+d;
    }
    if(d < b && d < c && d < a){
        ans = b+c+a;
    }
    return ans;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = compare(a, b, c, d);
    cout << sum << endl;
    return 0;
}