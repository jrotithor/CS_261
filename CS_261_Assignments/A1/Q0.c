/* CS261- Assignment 1 - Q. 0*/
/* Name: Jaydeep Rotithor
 * Date: 9/30/2015
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
//manipulates a pointer and prnts out the various information associated with it.
void fooA(int* iptr){
    printf("\n Value pointed to by iptr: %d", *iptr); //prints the value pointed to by iptr
 
    printf("\n address that iptr points to: %p", iptr); // prints the address that iptr points to
     
    printf("\n address of iptr: %p", &iptr); // prints the address of iptr
}

int main(){
    
   int x = 0; // initializes x
    
   printf("\n address of x: %p", &x); //prints the address of x
    
    fooA(&x); //calls fooA with the address of x;
    
    printf("\n value of x: %d\n", x); // prints the value of x;
    
    return 0;
}
