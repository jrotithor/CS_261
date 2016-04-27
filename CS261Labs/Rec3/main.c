//
//  main.c
//  Lab4
//
//  Created by Todd Kulesza on 1/25/14.
//  Copyright (c) 2014 Todd Kulesza. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sll.h"

#define N_STRINGS 4

/* Returns 1 if 'string' is a palindrom, 0 otherwise. */
int isPalindrome(char *string)
{
    int result = 1; /* set to 1 if 'string' is a palindrome */
    int i;
    
    /* Before finishing this function, you'll need to finish sll.c */
    
    struct sll * s = sll_create();
	for (i = 0; i < (int)strlen(string); i++)
    {
	//sll_push(s, string[i]);
    }
    /* This loop will help you iterate over a string one character at time */
    for (i = 0; i < (int)strlen(string); i++)
    {
      //  if(sll_pop(s) != string[i]);
		//return 0;
    }
    
    return result;
}

/* You shouldn't need to modify the main() function */
int main(void)
{
    int i;
    char *testStrings[N_STRINGS];
    testStrings[0] = "redder";
    testStrings[1] = "tacocat";
    testStrings[2] = "drabasafoolaloofasabard";
    testStrings[3] = "i'mnotapalindrome";
    
    for (i = 0; i < N_STRINGS; i++) {
        printf("Checking \"%s\"... ", testStrings[i]);
        if (isPalindrome(testStrings[i])) {
            printf ("it's a palindrome!\n");
        }
        else {
            printf ("nope, not a palindrome.\n");
        }
    }

    return 0;
}