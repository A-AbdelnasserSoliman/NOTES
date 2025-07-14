/*

eLearnSecurity 2013

*/

#include <iostream>
using namespace std;

// Declaration of global variables
int global_variable = 4;


int main()
{
	
	cout << "Value of global variable: " << global_variable << endl;
	
    int global_variable = 2;
	
	cout << "Value of global variable: " << global_variable << endl;
	
	cin.ignore();
	return 0;
}
