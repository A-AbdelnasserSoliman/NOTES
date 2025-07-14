/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

int main ()
 {
    int user_value;
    for (;;){
        cout << " 1 - Addition\n 2 - Exit Program\n";     
        cout << "Insert a number: ";
        cin >> user_value;
        cin.ignore();
        
        if (user_value == 1){
          cout << "Your addition source code here\n\n";
        }else if(user_value == 2){
          cout << "Bye";
          break;              
        }else{
          cout << "wrong data\n\n";
        }

    }        
    cin.ignore();
	return 0;
 } 
 
 

