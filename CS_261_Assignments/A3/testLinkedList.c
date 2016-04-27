#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
        
    struct linkedList * lst = createLinkedList();
	printf("Is the List Empty? %d\n",isEmptyList(lst));
	printf("adding 7 to front of list...\n");
	addFrontList(lst,7);
	printf("adding 14 to front of list...\n");
	addFrontList(lst,14);
	printf("adding 12 to back of list...\n");
	addBackList(lst,12);
	//printf("%d", lst -> size);
	printf("Is the List Empty? %d\n",isEmptyList(lst));
	printf("The value at the front of the list is... %d\n",frontList(lst));
	printf("The value at the back of the list is... %d\n", backList(lst));
	printf("removing from front of list...\n");
	removeFrontList(lst);
	printf("removing from back of list...\n");
	removeBackList(lst);
	printf("The value at the front of the list is... %d\n",frontList(lst));
	printf("The value at the back of the list is... %d\n", backList(lst));
	printf("Is the List Empty? %d\n", isEmptyList(lst));
	printf("adding 25 to the bag... \n");
	addList(lst, 25);
	printf("adding 14 to the bag... \n");
	addList(lst, 14);
	printf("adding 16 to the bag... \n");
	addList(lst, 16);
	printf("does the bag contain 27? %d\n", containsList(lst,27));
	printf("does the bag contain 7? %d\n", containsList(lst,7));
	printf("does the bag contain 14? %d\n", containsList(lst,14));
	printf("removing 23 from the bag... \n");
	removeList(lst,23);
	printf("removing 16 from the bag...\n");
	removeList(lst,16);
	printf("The value at the front of the list is... %d\n",frontList(lst));
	/* Test your linked list in here! */
    deleteLinkedList(lst);
	printf("Hello from test code!\n");
	return 0;
}


