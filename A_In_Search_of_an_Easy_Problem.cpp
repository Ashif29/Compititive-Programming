#include <bits/stdc++.h>
using namespace std;

void busted() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	bool b = false;
	for (int i = 0; i < n; ++i)
		if (arr[i] == 1)
			b = true;
	if (b)
		cout << "HARD" << endl;
	else
		cout << "EASY" << endl;

}

int main() {
	busted();
	return 0;
}