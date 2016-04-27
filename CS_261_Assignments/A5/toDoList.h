#ifndef __TODOLIST_H
#define __TODOLIST_H
#include "structs.h"
#include "dynamicArray.h"

#define TASK_DESC_SIZE 128

struct Task {
	char description[TASK_DESC_SIZE];  	/* description of the task */
	int priority;			  			/* task priority */
};

typedef  struct Task* TaskP;


TaskP createTask (int priority, char *desc);

void saveList(DynArr *heap, FILE *filePtr);

void loadList(DynArr *heap, FILE *filePtr);

void printList(DynArr *heap);
void addTask(DynArr * heap, int priority, char * description);
char * getTask(DynArr * heap);
void removeTask(DynArr * heap, comparator compare);
int compare (TYPE left, TYPE right);

void print_type(TYPE value);

#endif
