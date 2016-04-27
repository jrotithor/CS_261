/* CS261- Assignment 1 - Q.4*/
/* Name: Jaydeep Rotithor
 * Date:  10/1/2015 
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

struct student{
	int id;
	int score;
};
//sorts the scores of the students in ascending order and moves around to make sore the scores ane students are associated properly.
void sort(struct student* students, int n){
     int i = 0;
	int j = 1;
	int temp = 0;
     for(; i < n; i++)
		 for(j = 0; j < n; j++){
		     if(students[j - 1].score > students[j].score){
				 temp = students[j].score;
				 students[j].score = students[j - 1].score;
				 students[j - 1].score = temp;
				 temp = students[j].id;
				 students[j].id = students[j - 1].id;
				 students[j - 1].id = temp;
			 }
		 }/*Sort the n students based on their score*/     
     /* Remember, each student must be matched with their original score after sorting */
}

int main(){
      int n = 15; /*Declare an integer n and assign it a value.*/
    int a = 0;
    struct student * stud = malloc(sizeof(struct student) * n);/*Allocate memory for n students using malloc.*/
      int i = 0;
	 int j = 0;
	 int k = 0;
	 int zeroCount = 0;
	  for(; i < n; i++){
		  stud[i].id = rand()%n + 1;
		  
	      stud[i].score = rand()%101; /*Generate random ID and scores for 10 students, ID being between 1 and 10, scores between 0 and 100*/
	  }
	  int x[n];
	  for(i = 0; i < n; i++)
		  x[i] = 0;
	
	  for(i = 0; i < n; i++){
		 x[stud[i].id - 1]++;
		  
	  }
	  for(i = 0; i < n; i++){
		  if(x[i] == 0)
			   zeroCount++;		  
	  }
	  //printf("\n%d ", zeroCount);
	  int y[zeroCount];
	  for(i = 0; i < zeroCount; i++)
		  y[i] = 0;
	  k = 0;
	  for(i = 0; i < n; i++){
		  if(x[i] == 0){
			  y[k] = i + 1;
		      k++;
		  }
	  }
		  
	  
	  
	  //for(i = 0; i < zeroCount; i++)
		 // printf("%d ",y[i]);
	  k = 0;
	  for(j = 0; j < n; j++){
		 
		  while(x[j] > 1){
			  for(i = 0; i < n; i++){ 
			   if(x[j] > 1){
				  // printf("hi");
				   if(stud[i].id == (j+1)){
					  stud[i].id = y[k];
					  k++;
					  x[j]--; 
				    }
				  
			    }
			  }
			 
			 //printf(" %d\n", x[j]);
		  }
		  
	  } 
    /*Generate random IDs and scores for the n students, using rand().*/
    
    for(a = 0; a < n; a++){
		printf("Student:");
		printf(" %d\n", stud[a].id);
	 //for(a = 0; a < n; a++)
		 printf("Score:");
		printf(" %d\n", stud[a].score);
		}
	/*Print the contents of the array of n students.*/
    sort(stud,n);
    /*Pass this array along with n to the sort() function*/
      for(a = 0; a < n; a++){
		  printf("Student:");
		printf(" %d\n", stud[a].id);
	// for(a = 0; a < n; a++)
		 printf("Score:");
		printf(" %d\n", stud[a].score);
	  }
    /*Print the contents of the array of n students.*/
    free(stud);
    return 0;
}
