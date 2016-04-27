#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "toDoList.h"


int main (int argc, const char * argv[])
{
  char cmd = ' ';
  DynArr* mainList = createDynArr(10);
  FILE * fptr;
  printf("\n\n** TO-DO LIST APPLICATION **\n\n");
char filename[100];
  do
    {
      printf("Press:\n"
             "'l' to load to-do list from a file\n"
             "'s' to save to-do list to a file\n"
             "'a' to add a new task\n"
             "'g' to get the first task\n"
             "'r' to remove the first task\n"
             "'p' to print the list\n"
             "'e' to exit the program\n"
             );
      /* get input command (from the keyboard) */
      cmd = getchar();
      /* clear the trailing newline character */
     // while (getchar() != '\n');
		
		if(cmd == 'p')
			printList(mainList);
		else if(cmd == 'a'){
		char s[256];
		
		int i = 0;
		printf("Enter the description here:\n");
         scanf("%s", s);
		 	printf("Enter the priority here:\n");
         scanf("%d", &i);
 		addTask(mainList,i,s);
		
		
		}
		else if(cmd == 's'){
		printf("please enter the file:\n");
     	scanf("%s", filename);
		fptr = fopen(filename, "w");
		saveList(mainList, fptr);
		fclose(fptr);
		}
		else if(cmd == 'l'){
			printf("please enter the file:\n");
     	scanf("%s", filename);
		fptr = fopen(filename, "r");
		loadList(mainList, fptr);
		fclose(fptr);
		}
		else if(cmd == 'g')
			printf("the first task is: %s\n",getTask(mainList));
		
		else if(cmd == 'r'){
			removeTask(mainList,compare);
			printf("first task removed\n");
		}
			
      /* Fixme:  Your logic goes here! */

      /* Note: We have provided functions called printList(), saveList() and loadList() for you
         to use.  They can be found in toDoList.c */
    }
  while(cmd != 'e');
  /* delete the list */
  deleteDynArr(mainList);

  return 0;
}
