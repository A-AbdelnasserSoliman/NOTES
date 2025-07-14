/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

void swap(int *x, int *y)
{
     int temp;
     
     temp = *x;
     *x = *y;
     *y = temp;
}

int main ()
{
    int i, j;

    i = 5;
    j = 10;
    cout << "Before swap i is: " << i << " and j is: " << j <<endl;    
    
    swap(&i,&j);
    
    cout << "After swap i is: " << i << " and j is: " << j;
    
    cin.ignore();
	return 0;
 } 

