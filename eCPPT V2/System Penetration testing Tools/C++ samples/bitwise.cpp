/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

int main ()
 { 
    
    int x = 206;
    int y = 152;
    
    int z = x & y;
    cout << "Bitwise AND: " << z << "\n";
    
    z = x | y;
    cout << "Bitwise OR: " << z << "\n";
    
    x = x << 1;
    
    cout << "Left shift 1 bit: " << x << "\n";
    
    cin.ignore();
	return 0;
 } 

