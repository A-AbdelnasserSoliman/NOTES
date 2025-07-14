#include <windows.h>

char code[] = "\x31\xc0"                   
"\xb8\x88\x13\x00\x00"         
"\x50\xbb\x66\xc4\xe2\x77\xff\xd3"; 

int main(int argc, char **argv) 
{ 
  int (*func)(); 
  func = (int (*)()) code; 
  (int)(*func)(); 
}
