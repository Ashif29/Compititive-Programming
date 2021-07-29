/**
 *    author:  Asif
 *    created: 13.04.2021 13:17:23
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
typedef vector<string> vs;

int stability_check(vs inputs, vs sorted) {
	for (int i = 0; i < sorted.size() - 1; i++) {
		if (sorted[i][1] == sorted[i + 1][1]) {
			if (find(inputs.begin(), inputs.end(), sorted[i]) > find(inputs.begin(), inputs.end(), sorted[i + 1])) {
				return false;
			}
		}
	}
	return true;
}

void bubbleSort(vs cards) {
	for (int i = 0; i <  cards.size(); i++) {
		for (int j = cards.size() - 1; j >= i + 1; j--) {
			if (cards[j][1] < cards[j - 1][1]) {
				swap(cards[j], cards[j - 1]);
			}
		}
	}
	for (int i = 0; i < cards.size(); i++) {
		if (i != 0) cout << ' ';
		cout << cards[i];
	}
	cout << "\nStable\n";
}
void selectionSort(vs cards) {
	vs copy = cards;
	for (int i = 0; i < cards.size(); i++) {
		int mini = i;
		for (int j = i; j < cards.size(); j++) {
			if (cards[j][1] < cards[mini][1]) {
				mini = j;
			}
		}
		swap(cards[i], cards[mini]);
	}
	for (int i = 0; i < cards.size(); i++) {
		if (i != 0) cout << ' ';
		cout << cards[i];
	}
	if (stability_check(copy, cards))
		cout << "\nStable\n";
	else 
		cout << "\nNot stable\n";
}

int main () {
	int n; cin >> n;
	vs cards;
    while(n--){
        string s; cin >> s;
        cards.pb(s);
    }
	bubbleSort(cards);
	selectionSort(cards);
	return 0;
}