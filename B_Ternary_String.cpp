#include <bits/stdc++.h>
using namespace std;
#define INF (int)1e9
string s;
bool isValid(int mid){
	int freq[4] = {0};
	for(int i = 0; i < mid - 1; i++){
		int idx = s[i] - '0';
		freq[idx]++;
	}
	for(int i = mid - 1; i < s.size(); i++){
		int idx = s[i] - '0';
		freq[idx]++;
		if((freq[1] > 0) && (freq[2] > 0) && (freq[3] > 0)) return true;		
		idx = s[i - mid + 1] - '0';
		freq[idx]--;
	}	
	return false;
} 
void busted(){
    cin >> s;
	int res = INF;
	int L = 3;
	int R = s.size();	
	while(L <= R){
		int mid = (L + R) / 2;		
		if(isValid(mid)){
            res = min(res , mid);
            R = mid - 1;
        }
		else L = mid + 1;
	}
	if(res == INF) cout << "0\n";
    else cout << res << "\n";
}
int main(){
	int tc; cin >> tc;
	while(tc--){
		busted();
	}
    return 0;
}