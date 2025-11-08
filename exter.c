#include <stdio.h> 
#include "File1.c" 
extern int x;    
void display(); 
int main()  
{ 
// Declare global variable 
printf("Accessing x in another file: %d\n", x); 
display(); 
return 0; 
}