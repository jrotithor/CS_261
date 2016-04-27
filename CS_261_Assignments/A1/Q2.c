/* CS261- Assignment 1 - Q.2*/
/* Name: Jaydeep Rotithor
 * Date: 10/1/2015
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
//takes in numbers and pointers as input and performs various arithmetic operatons on them
int foo(int* a, int* b, int c){
    *a *= 2; /*Set a to double its original value*/
    
    *b /= 2;/*Set b to half its original value*/
    
    c = *a + *b; /*Assign a+b to c*/
    
    return c; /*Return c*/
}

int main(){
    int x = 7;
	int y = 8;
	int z = 9;
	/*Declare three integers x,y and z and initialize them to 7, 8, 9 respectively*/
    int * xptr = &x;
	int * yptr = &y;
	
	
    printf("x: %d\n", x);
	printf("y: %d\n", y);
	printf("z: %d\n", z);/*Print the values of x, y and z*/
    
    int a = foo(xptr,yptr,z);/*Call foo() appropriately, passing x,y,z as parameters*/
    
    printf("foo result: %d\n",a);/*Print the value returned by foo*/
    
    printf("x: %d\n", x);
	printf("y: %d\n", y);
	printf("z: %d\n", z);/*Print the values of x, y and z again*/
    /*Is the return value different than the value of z?  Why?*/
	
	
	/*The return values ends up being different from z because 
	in this situation, z is passed into foo() by value, so it will remain unchanged
	despite what occurs to it in the function.*/
    return 0;
}
    
    
