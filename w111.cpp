/**
 *    author:  Asif
 *    created: 00.03.2021 00:00:00
**/
#include <bits/stdc++.h>
using namespace std;

int statable_check(vector<string> inputs, vector<string> sorted) {
	for (unsigned i = 0; i < sorted.size() - 1; i++) {
		if (sorted[i][1] == sorted[i + 1][1]) {
			if (find(inputs.begin(), inputs.end(), sorted[i]) > find(inputs.begin(), inputs.end(), sorted[i + 1])) {
				return false;
			}
		}
	}
	return true;
}

void bubble_out(vector<string> cards) {
	for (int i = 0; i < (int) cards.size(); i++) {
		for (int j = (int) cards.size() - 1; j >= i + 1; j--) {
			if (cards[j][1] < cards[j - 1][1]) {
				swap(cards[j], cards[j - 1]);
			}
		}
	}
	for (unsigned i = 0; i < cards.size(); i++) {
		if (i != 0) cout << ' ';
		cout << cards[i];
	}
	cout << endl;
	cout << "Stable" << endl;
}
void selection_out(vector<string> cards) {
	vector<string> scheck_copy = cards;
	for (unsigned i = 0; i < cards.size(); i++) {
		unsigned mini = i;
		for (unsigned j = i; j < cards.size(); j++) {
			if (cards[j][1] < cards[mini][1]) {
				mini = j;
			}
		}
		swap(cards[i], cards[mini]);
	}
	for (unsigned i = 0; i < cards.size(); i++) {
		if (i != 0) cout << ' ';
		cout << cards[i];
	}
	cout << endl;
	if (statable_check(scheck_copy, cards)) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
}

int main () {
	int n;
	cin >> n;
	vector<string> cards(n);
	for (int i = 0; i < n; i++) {
		cin >> cards[i];
	}
	bubble_out(cards);
	selection_out(cards);
	return 0;
}
