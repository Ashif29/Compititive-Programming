/**
 *    author:  Asif
 *    created: 12.04.2021 09:02:39
**/
#include <bits/stdc++.h>
using namespace std;
 
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<vc> vvc;
const int N = 1e8;
vector <char> is_prime(N+1, true);
vector <int> prime;
 
int main(){
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i*i <= N; i++){
        if(is_prime[i]){
            for(int j = i*i; j <= N; j += i){
                is_prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if(is_prime[i]) prime.push_back(i);
    }
    for(int i = 1; i <= prime.size(); i += 100) cout << prime[i-1] << "\n";
 
    return 0;
} 