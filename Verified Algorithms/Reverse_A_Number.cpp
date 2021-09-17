/**   In the name of Allah (SWT).
*
*    author:  Asif
*
**/

#include <bits/stdc++.h>
using namespace std;

int reverse(int number) {
	int answer = 0;
	while (number > 0) {
		answer = answer * 10 + number % 10;
		number /= 10;
	}
	return answer;
}
int main()
{
    int number;
    cin >> number;
    cout << reverse(number) << '\n';
    return 0;
}