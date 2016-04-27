/* CS261- Assignment 1 - Q.1*/
/* Name: Jaydeep Rotithor
 * Date: 9/30/2015
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student{
	int id;
	int score;
};
//allocates memory for 10 students
struct student* allocate(){
     struct student * s = malloc(10*sizeof(struct student));/*Allocate memory for ten students*/
     
     return s;/*return the pointer*/
}
//generates a random list of unique id's and scores
void generate(struct student* students){
     int i = 0;
	 int j = 0;
	 int k = 0;
	 int zeroCount = 0;
	  for(; i < 10; i++){
		  students[i].id = rand()%10 + 1;
		  
	      students[i].score = rand()%101; /*Generate random ID and scores for 10 students, ID being between 1 and 10, scores between 0 and 100*/
	  }
	  int x[10]= {0,0,0,0,0,0,0,0,0,0};
	
	  for(i = 0; i < 10; i++){
		 x[students[i].id - 1]++;
		  
	  }
	  for(i = 0; i < 10; i++){
		  if(x[i] == 0)
			   zeroCount++;		  
	  }
	  //printf("\n%d ", zeroCount);
	  int y[zeroCount];
	  for(i = 0; i < zeroCount; i++)
		  y[i] = 0;
	  k = 0;
	  for(i = 0; i < 10; i++){
		  if(x[i] == 0){
			  y[k] = i + 1;
		      k++;
		  }
	  }
		  
	  
	  
	  //for(i = 0; i < zeroCount; i++)
		 // printf("%d ",y[i]);
	  k = 0;
	  for(j = 0; j < 10; j++){
		 
		  while(x[j] > 1){
			  for(i = 0; i < 10; i++){ 
			   if(x[j] > 1){
				  // printf("hi");
				   if(students[i].id == (j+1)){
					  students[i].id = y[k];
					  k++;
					  x[j]--; 
				    }
				  
			    }
			  }
			 
			 //printf(" %d\n", x[j]);
		  }
		  
	  }
		  
		  
	 
	  
}
//prints out the ids and scores of the students.
void output(struct student* students){
     int i = 0;
	 for(; i < 10; i++){
		 printf("ID: %d\n", students[i].id);
         printf("Score: %d\n", students[i].score);
	         /*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
	 }
}
//prints out all of the info of the students.
void summary(struct student* students){
     int i = 0;
	 int max = 0;
	 int min = 100;
	 float sum = 0.0;
	 for(; i < 10; i++){
		 sum += students[i].score;
         if(students[i].score > max)
            max = students[i].score;
         if(students[i].score < min)
            min = students[i].score;			 
	 }
    			 /*Compute and print the minimum, maximum and average scores of the ten students*/
	 
	sum /= 10.0;
	 printf("\nthe minimum number is: %d", min);
	 printf("\nthe maximum number is: %d", max);
	 printf("\nthe average score is: %f\n", sum);
}
//frees dynamically allocated memory
void deallocate(struct student* stud){
	if(stud != NULL)
     free(stud);/*Deallocate memory from stud*/
}

int main(){
    struct student* stud = NULL;
    
    stud = allocate();/*call allocate*/
    
    generate(stud);/*call generate*/
    
    output(stud);/*call output*/
    
    summary(stud);/*call summary*/
    
    deallocate(stud); /*call deallocate*/

    return 0;
}
