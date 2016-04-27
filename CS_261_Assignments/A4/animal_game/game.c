/*
  File: game.c
  Implementation of the animal game.
 
*/
#include <stdio.h>
#include <stdlib.h>
#include "game.h"

struct Node {
    TYPE         val;
    struct Node *left;
    struct Node *right;
};

struct BSTree {
    struct Node *root;
    int          cnt;
};
void _BSTreeInit(struct BSTree * tree){
	
	tree -> cnt = 0;
	tree -> root = 0;
	
}
//adds a node to the tree
struct Node * addNode(TYPE val){
	struct Node * n1 = malloc(sizeof(struct Node));
	n1 -> val = val;
	return n1;
	
}
//sets up the tree that will be treversed by the user in order to find the animal
struct BSTree * buildTree(){
	struct BSTree * tree = malloc(sizeof(struct BSTree));
	_BSTreeInit(tree);
	tree -> root = addNode("does it live in the water?");
	tree -> root -> left = addNode("can it eat humans?");
	tree -> root -> right = addNode("can it fly?");
	tree -> root -> left -> left = addNode("Shark");
	tree -> root -> left -> right = addNode("does it come up for air?");
	tree -> root -> right -> left = addNode("does it suck blood?");
	tree -> root -> right -> right = addNode("Is it a man's best friend?");
    tree -> root -> left -> right -> left = addNode("Whale");	
	tree -> root -> left -> right -> right = addNode("Clownfish");
	tree -> root -> right -> left -> left = addNode("Mosquito");
	tree -> root -> right -> left -> right = addNode("Bird");
	tree -> root -> right -> right -> right = addNode("Bear");
	tree -> root -> right -> right -> left = addNode("Dog");
	return tree;
	
	
	
}
//traverses the tree according to the user input.
void traverseTree(struct Node * cur){
	int i = 0;
	if(cur == NULL)
		printf("Sorry, looks like i couldn't find the animal\n");
	else{
		
		if(strcmp(cur -> val, "Shark") == 0 || strcmp(cur -> val, "Whale") == 0 || strcmp(cur -> val, "Clownfish") == 0 || strcmp(cur -> val, "Mosquito") == 0
		|| strcmp(cur -> val, "Bird") == 0 || strcmp(cur -> val, "Bear") == 0 || strcmp(cur -> val, "Dog") == 0){
			printf("Your animal is: %s\n", cur -> val);
			
		}
		else{
			printf(cur -> val);
		scanf("%d", &i);
		if(i == 1)
			traverseTree(cur -> left);
		else if(i == 2)
			traverseTree(cur -> right);
		else
			printf("Sorry, but that is an invalid input.\n");
	}
	
	}
	
	
	
}
//executes the tree traversal.
void search(struct BSTree * tree){
	traverseTree(tree -> root);
}
int main(){
	printf("Welcome to the guess the animal game. You will be asked a series of functions. Type in 1 to answer yes and 2 to answer no. All other inputs will not be accepted.\n\n");
	struct BSTree * tree = buildTree();
	search(tree);
	
}
