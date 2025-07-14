/*

eLearnSecurity 2013

*/

#include <iostream>
using namespace std;

int sum (int x){
    
    x = 10 + x;
    return(x);
    
    }

int main()
{
	int x = 5;
	
    cout << "The result of 10 + " << x << " is " << sum(x) << endl;
    cout << "Value of x is still " << x;

	cin.ignore();
}

