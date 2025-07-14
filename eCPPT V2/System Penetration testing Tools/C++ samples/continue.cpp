/*

eLearnSecurity 2013

*/

#include <iostream> 
using namespace std; 

int main ()
 {
    int user_value;
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 5; i++){
        cout << "Insert a number: ";
        cin >> user_value;
        cin.ignore();
        
        if(user_value % 2 == 0){
                ++even;
                continue;
        }       
        ++odd;
    }    
    
    cout << endl << "even: " << even << " - odd: " << odd ;    

    cin.ignore();
	return 0;
 } 
 
 

