/* CS261- Assignment 1 - Q.5*/
/* Name: Jaydeep Rotithor
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
     return ch-'a' +'A';
}

/*converts ch to lower case, assuming it is in upper case currently*/
char toLowerCase(char ch){
     return ch-'A' +'a';
}
//takes in a string and converts it to studly characters.
void studly(char* word){
	int i = 0;
	//printf(word);
     for(; i < 100; i++)
		 if(word[i] == '\0')
			 break;
	     else{
			 if(i % 2 == 0){
				 if(word[i] >= 'a' && word[i] <= 'z')    //tests to see if the letter should become uppercase.
				    word[i] = toUpperCase(word[i]);
			 }
			 else 
			 {
				 if(word[i] >= 'A' && word[i] <= 'Z') //tests to see if the letter should become lowercase.
				   word[i] = toLowerCase(word[i]);
			 }
			 
		 }
		
	 
}

int main(){
	char * x = malloc(sizeof(char)*100);
	printf("Type a word here: ");
    // printf("hi");
	scanf("%s", x);/*Read word from the keyboard using scanf*/
   	
    studly(x);/*Call studly*/
    printf(x);
    free(x);
    /*Print the new word*/
    
    return 0;
}
