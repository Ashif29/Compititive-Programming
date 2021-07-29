   // CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	// Take any string
	string s1 = "dog:cat";

	// Copy three characters of s1 (starting
	// from position 1)
	string r = s1.substr(0, 2);
    string sub = s1.substr(3 + 1, 2);

	// prints the result
	cout << "String is: " << sub;

	return 0;
}
