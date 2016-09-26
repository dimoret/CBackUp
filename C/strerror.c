#include <stdio.h> 
#include <errno.h> 

int main(void) 
{ 
   char *buffer; 
   buffer = strerror(errno); 
   printf("Error: %s\n", buffer); 
   return 0; 
} 