/*

eLearnSecurity 2013

*/

#include <iostream>
using namespace std;

int main()
{
	// Variables declaration
	
	int a = 0;
	int b = 2;
	int sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	a = 3;
	
	sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	cin.ignore();
	return 0;
}
