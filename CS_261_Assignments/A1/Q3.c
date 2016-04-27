/* CS261- Assignment 1 - Q.3*/
/* Name: Jaydeep Rotithor
 * Date: 10/1/2015 
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
//sorts all of the elements of the array
void sort(int* number, int n){
	int i = 0;
	int j = 1;
	int temp = 0;
     for(; i < n; i++)
		 for(j = 0; j < n; j++){
		     if(number[j - 1] > number[j]){
				 temp = number[j];
				 number[j] = number[j - 1];
				 number[j - 1] = temp;
			 }
		 }
	 /*Sort the given array number , of length n*/     
}

int main(){
	int i = 0;
    int n = 20;/*Declare an integer n and assign it a value of 20.*/
    
    int * arr = malloc(sizeof(int)*n);/*Allocate memory for an array of n integers using malloc.*/
    
    for(; i < n; i++)
		arr[i] = rand() % n;/*Fill this array with random numbers between 0 and n, using rand().*/
    
    for(i = 0; i < n; i++)
		printf("\n%d", arr[i]);
	/*Print the contents of the array.*/
	sort(arr,n);

    /*Pass this array along with n to the sort() function.*/
     for(i = 0; i < n; i++)
		printf("\n%d", arr[i]);
	free(arr);
    /*Print the contents of the array.*/    
    
    return 0;
}
