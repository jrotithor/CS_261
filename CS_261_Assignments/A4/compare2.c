#include <stdio.h>
#include <assert.h>
#include "bst.h"
#include "structs.h"

int compare_name(TYPE left, TYPE right)
{
	struct data * d1;
	struct data * d2;
	d1 = (struct data *)left;
	d2 = (struct data *)right;
	if(strcmp(d1 -> name, d2 -> name) == 1)
		return 1;
	if(strcmp(d1 -> name, d2 -> name) == -1)
		return 1;
	else
		return 0;
    /*FIXME: write this*/
	

}