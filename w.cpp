
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[7];
// 	int sum = 0;
// 	for(int i = 0; i < 7; i++){
// 		cout << "Enter the no. " << i + 1 << " book price = ";
// 		cin >> arr[i];
// 		sum = sum + arr[i];
// 	}
// 	for(int i = 0; i < 7; i++){
// 		cout << i + 1 << "no. book price = " << arr[i] << endl;
// 	}
// 	cout << "total book price = " << sum << endl;
// 	cout << "Remaining Ballence = " << 6500 - sum << endl;
// 	return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
// 	float marks[10], credit[10], gp[10], total_marks[10], temp, total_credit = 0, total_gp = 0, gpa;
// 	int i, n, fail = 0;
// 	cout << "\n 3 theory and 2 sessional courses  ";

// 	for (i = 0; i < 5; i++)
// 	{
// 		cout << "\n\n Course " << i + 1 << " credit hours : ";
// 		cin >> credit[i];
// 		cout << "\n Total marks in this course : ";
// 		cin >> total_marks[i];
// 		cout << "\n obtain marks in this course " << i + 1 << " : ";
// 		cin >> marks[i];
// 	}
// 	for (i = 0; i < n; i++)
// 	{
// 		temp = (marks[i] * 100) / total_marks[i];

// 		if (temp >= 80)
// 			gp[i] = 4.00;
// 		else if (temp >= 75)
// 			gp[i] = 3.75;
// 		else if (temp >= 70)
// 			gp[i] = 3.5;
// 		else if (temp >= 65)
// 			gp[i] = 3.25;
// 		else if (temp >= 60)
// 			gp[i] = 3.00;
// 		else if (temp >= 55)
// 			gp[i] = 2.75;
// 		else if (temp >= 50)
// 			gp[i] = 2.50;
// 		else if (temp >= 45)
// 			gp[i] = 2.25;
// 		else if (temp >= 40)
// 			gp[i] = 2.00;
// 		else
// 		{
// 			gp[i] = 0;
// 			fail = 1;
// 		}
// 	}
// 	if (fail == 1)
// 		cout << " Failed!! ";
// 	else
// 	{
// 		for (i = 0; i < n; i++)
// 		{
// 			total_credit = total_credit + credit[i];
// 			total_gp = total_gp + credit[i] * gp[i];
// 		}
// 		gpa = total_gp / total_credit;
// 		cout << "\n CGPA is : " << gpa;
// 	}
// 	return 0;
// }


#include <iostream>
using namespace std;
int main()
{
	int p, q, r, s;
	p = 96, q = 42, r= p - q;
	cout << "\n\n\n";
	cout << "s = p + r = " << p + q << endl;
	cout << '\n' << '\n' << '\n';
}