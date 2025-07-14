/*

eLearnSecurity 2013

*/

#include <iostream>
using namespace std;

int var = 1;

int sum (int x, int y){
    
    int z;
    z = x + var;
    return(z);
    
    }

int main()
{
	int a, b, result;
	cout << "Please enter two numbers: " << endl;
	cin  >> a; 
	cin.ignore();
	cin  >> b; 
	cin.ignore();

    result = sum(a,b);
    
    cout << "The result of " << a << "+" << b << " is " << result;

	cin.ignore();
}

