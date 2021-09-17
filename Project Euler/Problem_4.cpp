// Largest palindrome product

/**   In the name of Allah (SWT).
*
*    author:  Asif
*
**/

#include <bits/stdc++.h>
using namespace std;

int reverse(int number) {

	int result = 0;

	while (number > 0) {
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}
int main()
{
    int answer = 1;
    for(int i = 100; i < 1000; i++){
        for(int j = i; j < 1000; j++){
            if(reverse(i * j) == (i * j)){
                answer = max(answer, (i * j));
            }
        }
        
    }
    cout << answer << '\n';
    return 0;
}