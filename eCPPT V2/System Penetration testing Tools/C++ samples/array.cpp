/*

eLearnSecurity 2013

*/

#include <iostream> 
#include <string>
using namespace std; 


int main ()
{
    int x[20];
    int i;
    
    for (i=0;i<20; ++i){
        x[i] = i;
    }
    
    for (i=0;i<20; ++i){
        cout << x[i] << ",";
    }

    
    cin.ignore();
	return 0;
 } 

