#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main(){
    ll N;
    cin >> N;
    for(ll i = 1; ; i++){
        cout << stoll(to_string(i) + to_string(i)) << endl;
        if(stoll(to_string(i) + to_string(i)) > N){
            // cout << stoll(to_string(i) + to_string(i)) << i - 1 << endl;
           break;
        }
        cout << stoll(to_string(i) + to_string(i)) << endl;
    }
    // cout << stoll(to_string(N) + to_string(N)) << endl;
}
