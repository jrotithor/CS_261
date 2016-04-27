#include "cirListDeque.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
        
    struct cirListDeque * d = createCirListDeque();
	printf("Is the Circular list deque empty? %d\n", isEmptyCirListDeque(d));
	printf("adding 14 to front..\n");
	addFrontCirListDeque(d,14);
	printf("adding 34 to front..\n");
	addFrontCirListDeque(d,34);
	printf("adding 5 to back..\n");
	addBackCirListDeque(d,5);
	printf("adding 25 to back..\n");
	addBackCirListDeque(d,25);
	//addBackCirListDeque(d,27);
	printf("Is the Circular list deque empty? %d\n", isEmptyCirListDeque(d));
	printf("the first value in the deque is: %f\n", frontCirListDeque(d));
	printf("the last value in the deque is: %f\n", backCirListDeque(d));
	printf("removing first...\n");
	removeFrontCirListDeque(d);
	printf("the first value in the deque is: %f\n", frontCirListDeque(d));
	printf("removing last...\n");
	removeBackCirListDeque(d);
	printf("the last value in the deque is: %f\n", backCirListDeque(d));
	printf("printing contents of the deque...\n");
	printCirListDeque(d);
	printf("reversing...\n");
	reverseCirListDeque(d);
	printf("printing contents of the deque...\n");
	printCirListDeque(d);
	deleteCirListDeque(d);
	
	/* Test your linked list in here! */

	printf("Hello from test code!\n");
	return 0;
}


