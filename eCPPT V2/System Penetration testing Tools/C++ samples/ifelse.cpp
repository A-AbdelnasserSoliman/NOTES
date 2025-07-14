/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

int main ()
 {
    int user_value;
    cout << "Insert a number\n";
    cin >> user_value;
    cin.ignore();
    if(user_value < 10)
    {
      cout << "The value is less then 10";
    }else{
      cout << "The value is greater then 10";      
    }
    
    cout << "Press Enter To Exit...";
    cin.ignore();
	return 0;
 } 

