/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 


int main ()
{
    int x = 10;
    int y = 0;
    int *p1, *p2;
    
    p1 = &x;
    p2 = p1;
    y = *p2;
    *p2 = 5;
    
    cout << "p1 : " << p1 << "\np2 : " << p2 <<endl;    
    cout << "\ny  : " << y << "\nx  : " << x << endl; 
    
    cin.ignore();
	return 0;
 } 

