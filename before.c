#include<stdio.h>

void myConstructor (void) __attribute__ ((constructor));

void myConstructor (void)
{
 printf ("Before main() function\n");
}


int main (void) 
{ 
 printf ("Main function()\n"); 
 return 0; 
}